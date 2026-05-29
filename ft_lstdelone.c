#include "libft.h"
#include <stdio.h>
void del(void *content){
	content = NULL;
}

void	ft_lstdelone(t_list *lst, void(*del)(void *)){
	if(!lst | !del) return;
	del(lst->content);
	free(lst);
	lst = NULL;
}
int main(){
	t_list *first = ft_lstnew("1");
	t_list	*second = ft_lstnew("2");
	t_list	*third = ft_lstnew("3");
	ft_lstadd_back(&first, second);
	ft_lstadd_back(&second, third);

	printf("first next: %s\n", (char *) first->next->content);
	ft_lstdelone(second, *del);
	printf("first next = %s\n", (char *) first->next->content);
	return 0;
}
