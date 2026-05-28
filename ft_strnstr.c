#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n){
	char *p;

	if(!*s2) return (char *)s1;
	p = 0;
	while(n){
		if(*s2 == *s1){
			p = (char *)s1;
			while(n && *s2 == *s1){
				s1++;
				s2++;
				n--;
			}

			if(!*s2){
				return p;
			} else {
				p = 0;
				return p;
			}
		}
		s1++;
		n--;
	}

	return p;
}
int main(){
	#include <stdio.h>
	#include <unistd.h>
	const char	*largestring = "Foo Bar	Baz";
	const char	*smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 5);
	printf("%p\n", ptr);
	ptr = ft_strnstr(largestring, smallstring, 7);
	while(*ptr){
		write(1, ptr, 1);
		ptr++;
	}

}
