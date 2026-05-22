#include <stddef.h>
void *ft_memchr(void *s, int c, size_t n){
	unsigned char *p;
	p = s;

	while(n > 0){
		if(*p == c){
			return p;
		} 
		p++;
		n--;
	}
	return 0;
}

int main(){
	#include <stdio.h>

	char buffer[6] = "abcde";
	char *p = buffer + 2;

	printf("%c: %p\n", *p, p);
	char *p2 = (char *)ft_memchr(buffer,'z',8);
	printf("%p", p2);
}
