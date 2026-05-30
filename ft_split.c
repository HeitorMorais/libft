#include "libft.h"
char	**ft_split(char const *s, char c){
	char **arr;
	char **ptr_arr;
	char *ptr;
	int	i;
	arr = malloc(ft_strlen(s) + 1);
	ptr = malloc(ft_strlen(s) + 1);
	ptr_arr = arr;
	i = 0;
	if(!arr) return NULL;
	*ptr = '\0';
	while(*s == c) s++;
	while(*s){
		if(*s == c){
			while(*s == c) s++;
			ptr[i] = '\0';
			*ptr_arr = ft_strdup(ptr);
			*ptr = '\0';
			i = 0;
			ptr_arr++;
		} else {
			ptr[i] = *s;
			i++;
			s++;
		}
	}
	if(ptr){
		*ptr_arr = ft_strdup(ptr);
		ptr_arr++;
	}
	*ptr_arr = "\0";
	return arr;
}

int main(){
	#include <stdio.h>
	char const *str = "ab,cd,ef,gh";
	char **arr = ft_split(str, ',');
	while(*arr){
		printf("%s\n", *arr);
		arr++;
	}
	return 0;
}
