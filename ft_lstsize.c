#include "libft.h"

int	ft_lstsize(t_list *lst){
	int i;
	i = 1;
	while(lst->next != NULL){
		i++;
		lst = lst->next;
	}
	return i;
}

int main(){
	#include <stdio.h>

	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");

	ft_lstadd_front(&node3, node2);
	ft_lstadd_front(&node2, node1);
	int n = ft_lstsize(node3);
	printf("%d", n);
	return 0;
}
