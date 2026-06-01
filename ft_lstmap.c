#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*)){
	t_list *current;
	t_list *head;

	head = lst;
	current = lst;
	
	if(!lst || !f) return NULL;

	while(current){
		f(current->content);
		if(*(char *)(current->content) < 97 && *(char *)(current->content) > 122) del(current->content);
	 	current = current->next;
	}

	return head;
}
/*
int main(){
	#include <stdio.h>
	char str1[] = "abcd";
	char str2[] = "Gfgh";
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);

	ft_lstadd_back(&node1, node2);
	
	ft_lstmap(node1, up, del);

	printf("%s, %s", (char *)node1->content, (char *)node2->content);

	return 0;	
}*/
