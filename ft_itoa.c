#include "libft.h"

char *ft_itoa(int n){
	char	*str;
	char	*ptr_str;
	int	len;
	long	n_copy;

	if(n == 0) return "0";

	len = 1;
	n_copy = n;

	if(n < 0) n_copy *= -1;
	while(n_copy >= 10){
		len++;
		n_copy /= 10;
	}
	str = malloc(len + 2);
	if(!str) return NULL;

	ptr_str = str;
	if(n < 0){
		n_copy = n * -1;
		*ptr_str = '-';
		ptr_str++;
	}
	else {
		n_copy = n;
	}
	while(len){
		ptr_str++;
		len--;
	}

	*ptr_str = '\0';
	
	while(n_copy > 0){
		ptr_str--;
		*ptr_str = (n_copy % 10) + 48;
		n_copy /= 10;
	}
	return str;
}

/*int main(){
	#include <stdio.h>
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(5));
	printf("%s\n", ft_itoa(505));
	printf("%s\n", ft_itoa(-473));
	printf("%s\n", ft_itoa(1000));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-214748));
	printf("%s\n", ft_itoa(-2147483647));
	return 0;
}*/
