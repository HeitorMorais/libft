#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new){
	new->next = *lst;
}

/*int main(){
	#include <stdio.h>
	t_list *node = ft_lstnew("2");
	t_list	*first = ft_lstnew("1");

	ft_lstadd_front((t_list **)node, first);
	printf("first, %s. next = %s\n", (char *) first->content, (char *) first->next);
	printf("second, %s", (char *) node->content);
	return 0;
}*/
