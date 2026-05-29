#include "libft.h"
#include <stdio.h>
void del(void *content){
	content = NULL;
}

void	ft_lstclear(t_list **lst, void(*del)(void *)){
	t_list	*current;
	t_list	*next;
	current = *lst;
	next = current->next;
	if(!lst | !del) return;
	while(current){
		del(current->content);
		free(current);
		current = next;
		next = current->next;

	}
}
int main(){
	t_list *first = ft_lstnew("1");
	t_list	*second = ft_lstnew("2");
	t_list	*third = ft_lstnew("3");
	ft_lstadd_back(&first, second);
	ft_lstadd_back(&second, third);

	printf("third: %s\n", (char *) third->content);
	ft_lstclear(&first, *del);
	printf("third: %s\n", (char *) third->content);
	return 0;
}
