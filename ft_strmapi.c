#include "libft.h"

char	upper(unsigned int i, char c){
	char s = i + c;
	return s;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
	char	*str;
	unsigned int	i;

	str = malloc(ft_strlen(s) + 1);
	if(!str) return NULL;


	i = 0;
	while(*s){
		*str = f(i, *s);
		str++;
		s++;
		i++;
	}
	str -= i;
	return str;
}

int main(){
	#include <stdio.h>
	printf("%s", ft_strmapi("1234", *upper));
	return 0;
}
