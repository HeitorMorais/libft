#include "libft.h"

void	up(void *content){
	*(char *)content -= 32;	
}

void	ft_lstiter(t_list *lst, void (*f)(void*)){
	t_list *current;

	current = lst;
	
	if(!lst || !f) return;

	while(current){
		f(current->content);
	 	current = current->next;
	}
}

int main(){
	#include <stdio.h>
	char str1[] = "abcd";
	char str2[] = "efgh";
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);

	ft_lstadd_back(&node1, node2);
	
	ft_lstiter(node1, up);

	printf("%s, %s", (char *)node1->content, (char *)node2->content);

	return 0;	
}
