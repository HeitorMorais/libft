#include "libft.h"

void	ft_putnbr_fd(int n, int fd){
	int	size;
	long	n_copy;

	size = 1;
	n_copy = n;
	if(n_copy < 0){
		n_copy = -n_copy;
		size++;
	}

	while(n_copy){
		if(n_copy >= 10){
		size++;
		}
		n_copy /= 10;
	}
	write(fd, ft_itoa(n), size);
}

int main(){ ft_putnbr_fd(-2147483647, 1);}
