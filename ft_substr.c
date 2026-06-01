#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
	char	*substr;
	char	*ptr;

	substr = malloc(len * sizeof(char));
	if(substr == NULL) return NULL;
	ft_bzero(substr, len);
	ptr = substr;
	while(start){
		s++;
		start--;
	}
	while(*s){
		*ptr += *(char *)s;
		ptr++;
		s++;
	}

	return substr;
}

/*int main(){
	#include <stdio.h>
	printf("%s", ft_substr("abcde", 3, 6));
	return 0;
}*/
