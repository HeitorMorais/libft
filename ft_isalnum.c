#include "libft.h"

int	ft_isalnum(char c){
	if(ft_isalpha(c) || ft_isdigit(c)) return 1;
	return 0;
}

int main(){
	#include <stdio.h>

	printf("%d", ft_isalnum(2));
	return 0;
}
