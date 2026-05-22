#include <stddef.h>

void *ft_memcpy(void *dest, void *src, size_t n){
	unsigned char *ptr_dest;
	unsigned char *ptr_src;

	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	if(ptr_dest + n <= ptr_src || ptr_src + n <= ptr_dest) {
		while(n > 0){
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
			n--;
		}
	}
	return dest;
}

int main(){
	#include <stdio.h>
	char buffer1[11] = "..........";
	char buffer2[11] = ",,,,,,,,,,";

	printf("1: %s  2: %s", buffer1, buffer2);

	ft_memcpy(buffer1, buffer2, 5);
	printf("1: %s  2: %s", buffer1, buffer2);
}
