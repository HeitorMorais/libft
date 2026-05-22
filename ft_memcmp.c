#include <stddef.h>

int	ft_memcmp(void *s1, void *s2, size_t n){
	unsigned char *p1;
	unsigned char *p2;

	if(n == 0) return 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;

	while((*p1 || *p2) && n > 0){
		if(*p1 != *p2) return *p1 - *p2;
		p1++;
		p2++;
		n--;
	}

	return 0;
}

int main(){
	#include <stdio.h>

	printf("%d\n", ft_memcmp("AB", "Ab", 2));
	printf("%d", ft_memcmp("AB", "Ab", 1));

	return 0;
}
