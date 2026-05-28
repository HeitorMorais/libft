#include "libft.h"

t_list	*ft_lstnew(void *content){
	t_list	*node;
	node = malloc(sizeof(content));
	if(!node) return NULL;
	node->content = content;
	node->next = NULL;
	return node;
}

/*int main()
{
	#include <stdio.h>
	char *str = "teste";
	t_list *n = ft_lstnew(str);
	printf("%s",(char *) n->content);
	return 0;
}*/
