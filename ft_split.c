#include "libft.h"

char	**ft_split(char const *s, char c){
	char **arr;
	char *str;
	int	counter;

	arr = malloc(ft_strlen(s) + 1);
	str = malloc(ft_strlen(s) + 1);
	counter = 0;
	if(!arr || !str) return NULL;
	while(*s){
		if(*s != c){
			*str = *s;
			str++;
			s++;
			counter++;
		}
		else {
			*str = '\0';
			*arr = str;
			str -= counter;
			//ft_bzero(str, counter);
			counter = 0;
			if(!str) return NULL;
			arr++;
			s++;
		}
	}
	if(*str){
		*arr = str;
		arr++;
	}
	*arr = NULL;
	return arr;
}

int main(){
	#include <stdio.h>
	char **arr = ft_split("ab,cd,ef", ',');
	for(int i=0; i < 3; i++) printf("%s\n", arr[i]);
	return 0;
}
