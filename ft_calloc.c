#include <libft.h>

void *ft_calloc(size_t n, size_t size){
	void *p;

	p = malloc(size * n);
	if(p == NULL){	
		return NULL;
	}
	return p;
}

int main() 
{
 	#include <stdio.h>
    int *ptr;
    int n = 5;

     ptr = (int*) ft_calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }

    free(ptr);
    return 0;

}
