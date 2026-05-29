#include "libft.h"
#include <stdio.h>
char	**ft_split(char const *s, char c){
	char **arr;
	char	**ptr;
	int	i;

	arr = malloc(ft_strlen(s) + 1);
	ptr = arr;
	i = 0;
	if(!arr) return NULL;
	while(*s){
		if(*s != c){
			ptr++;
			i = 0;
		} else {
			*ptr[i] = *s;
			i++;
		}
		s++;
	}
	printf("%s", arr[1]);
	*ptr = "\0";
	return arr;
}

int main(){
	#include <stdio.h>
	char **arr = ft_split("ab,cd,ef", ',');
	//for(int i=0; i < 3; i++) printf("%s\n", arr[i]);
	return 0;
}
