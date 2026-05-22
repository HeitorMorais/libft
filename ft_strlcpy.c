#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size){
	int	n;
	
	if(!src || size == 0) return 0;
	n = 0;
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

	char buffer[6] = "abcde";
	char buffer2[8] = "fghijkl";
	ft_strlcpy(buffer, buffer2, 7);
	printf("1: %s, 2: %s",buffer, buffer2);
}
