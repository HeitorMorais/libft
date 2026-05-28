#include "libft.h"

char *ft_strtrim(char const *s1, char const *set){
	char	*copy;
	char 	*ptr_copy;
	size_t	reset;
	int	hasChar;

	copy = malloc(ft_strlen(s1) + 1);
	reset = ft_strlen(set);
	hasChar = 0;
	ptr_copy = copy;

	if(copy == NULL) return NULL;

	while(*s1){
		while(*set){
			if(*set == *s1){
				hasChar = 1;
				break;
			}
			set++;
		}
		if(!hasChar){
			*ptr_copy = *s1;
			hasChar = 0;
		}
		s1++;
		ptr_copy++;
		set -= reset;
	}

	*ptr_copy = '\0';
	return copy;
}

int main(){
	#include <stdio.h>
	printf("%s", ft_strtrim("abcdefgh   ", "  "));
	return 0;
}
