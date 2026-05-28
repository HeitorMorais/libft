#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new){
	t_list	*current = *lst;
	while(current->next){
		current = current->next;
	}
	current->next = new;
}

int main(){
	#include <stdio.h>
	t_list *node = ft_lstnew("2");
	t_list	*first = ft_lstnew("1");

	ft_lstadd_back(&first, node);
	printf("first, %s. next = %s\n", (char *) first->content, (char *) first->next->content);
	printf("second, %s", (char *) node->content);
	return 0;
}
