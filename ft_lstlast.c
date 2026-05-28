#include "libft.h"

t_list	*ft_lstlast(t_list *lst){
	while(lst->next){
		lst = lst->next;
	}
	return lst;
}

int main(){
	#include <stdio.h>

	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");

	ft_lstadd_front(&node3, node2);
	ft_lstadd_front(&node2, node1);
	printf("%s", (char *)ft_lstlast(node1)->content);
	return 0;
}

