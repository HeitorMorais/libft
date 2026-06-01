#include "libft.h"

static int	is_valid(char c){
	return (c >= '0' && c <= '9') || c == '-' || c == '+';
}

int ft_atoi(const char *nptr){
	int sign = 1;
	long number = 0;

	while(*nptr == ' ') nptr++;
	
	while(is_valid(*nptr)){
		if(*nptr == '-'){
			sign *= -1;
		}
		if(*nptr >= '0' && *nptr <= '9'){
			number *= 10;
			number += *nptr - 48;
		}
		nptr++;
	}

	return number * sign;
}

int main(){
	#include <stdio.h>

	char *number = "     +++---54";

	printf("%d", ft_atoi(number));
}
