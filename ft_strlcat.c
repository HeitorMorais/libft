#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t size){
	int	n;
	
	if(!src || size == 0) return 0;
	n = 0;
	while(*dest) dest++;
	while(*src && size > 0){
		*dest = *src;
		dest++;
		src++;	
		n++;
		size--;
	} 
	*dest = '\0';
	return n;
}

int main(){
	#include <stdio.h>

	char buffer[11] = "abcde";
	char buffer2[6] = "fghij";
	ft_strlcat(buffer, buffer2, sizeof(buffer));
	printf("1: %s",buffer);
}
