#include "libft.h"

void ft_bzero(void *dest, size_t n){
	unsigned char *ptr;

	ptr = (unsigned char *) dest;
	while(n > 0){
		*ptr = '\0';
		ptr++;
		n--;
	}
}

/*int main(){
	#include <stdio.h>
	char buffer[11]= "1234512345";
	char *ptr = buffer;

	ptr += 5;
	ft_bzero(ptr, 5);
	printf("%s", buffer);

	return 0;
}*/
