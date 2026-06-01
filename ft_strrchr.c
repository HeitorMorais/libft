#include "libft.h"

char *ft_strrchr(char *s, int c){
	char *p;

	p = NULL;
	while(*s){
		if(*s == c){
			p = s;
		}
		s++;
	}
	if(c == 0) p = s;

	return p;
}

int main(){
	#include <stdio.h>
	char buffer[6] = "abcdce";
	char *ptr = buffer + 2;
	printf("esse tem que ser duas posições depois do debaixo: %p\n", ft_strrchr(buffer, 'c'));
	printf("%p", ptr);
}
