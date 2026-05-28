#include "libft.h"

void	test(unsigned int i, char *c){
	*c = i + '0';
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*)){
	int	i;

	i = 0;
	while(*s){
		f(i, s);
		s++;
		i++;
	}
}

/*int main(){
	#include <stdio.h>
	char str[10]= "abshcsjal";
	ft_striteri(str, *test);
	printf("%s", str);
}*/
