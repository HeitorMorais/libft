#include "libft.h"

void *ft_memset(void *dest, int c, size_t n){
	unsigned char *ptr;

	ptr = (unsigned char *)dest;

	if(!ptr){
		return NULL;
	}

	while(ptr && n > 0){
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}

	return dest;
}

int main() {
	#include <stdio.h>
    char buffer[20 + 1];
    buffer[20] = '\0';

    ft_memset(buffer, '.', 20);
    printf("Buffer inicial:   %s\n", buffer);

    ft_memset(buffer, 'A', 10);
    printf("Após primeiros A: %s\n", buffer);

    ft_memset(buffer + 10, 'B', 10);
    printf("Após os B:        %s\n", buffer);

    return (0);
}
