#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2){
	char *s;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(len * sizeof(char) + 2);
	if(s == NULL) return NULL;
	
	while(*s1){
		*s = *s1;
		s++;
		s1++;
	}
	while(*s2){
		*s = *s2;
		s++;
		s2++;
	}
	s -= len;
	return s;
}

int main(){
	#include <stdio.h>
	printf("%s", ft_strjoin("ab", "cdef"));
	return 0;
}
