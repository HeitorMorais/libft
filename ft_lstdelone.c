#include "libft.h"

void del(void *content){
	*content = NULL;
}

void	ft_lstdelone(t_list *lst, void(*del)(void *)){
	del(&lst->content);
	free(lst);
}
int main(){
	#include <stdio.h>
	t_list *first = ft_lstnew("1");
	t_list	*second = ft_lstnew("2");
	t_list	*third = ft_lstnew("3");
	ft_lstadd_back(&first, second);
	ft_lstadd_back(&second, third);

	printf("second: %s,  next = %s\n", (char *) second->content, (char *) second->next->content);
	ft_lstdelone(second, *del);
	printf("second: %s,  next = %s\n", (char *) second->content, (char *) second->next->content);
	return 0;
}
