#include <stddef.h>
void *ft_memmove(void *dest, const void *src, size_t n){
	unsigned char temp[n + 1];
	unsigned char *ptr_dest;
	unsigned char *ptr_src;
	unsigned char *ptr_temp;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	ptr_temp = temp;

	while(*ptr_src && n > 0){
		*ptr_temp = *ptr_src;
		ptr_temp++;
		ptr_src++;
		n--;
	}
	ptr_temp = temp;
	while(*ptr_temp){
		*ptr_dest = *ptr_temp;
		ptr_dest++;
		ptr_temp++;
		n--;	
	}

	return dest;
}

int main(){
	#include <stdio.h>

	char buffer[11] = ".....,,,,,";
	char *buffer2 = buffer+5;
	
	printf("%s", (char *)ft_memmove(buffer, buffer2, 4));
}
