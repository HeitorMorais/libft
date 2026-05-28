#include "libft.h"

int ft_tolower(int c){
	if(c >= 'A' || c <= 'Z') return c + 32;

	return c;
}

int main(){
	#include <stdio.h>
	printf("%c", ft_tolower(65));
}
