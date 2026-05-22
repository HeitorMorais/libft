#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n){
	while((*s1 || *s2) && n > 0){
		if(*s1 != *s2) return *s1 - *s2;
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int main(){
	#include <stdio.h>
	printf("%d\n", ft_strncmp("abcd", "abcz", 3));
	printf("%d\n", ft_strncmp("abcd", "abcz", 4));
}
