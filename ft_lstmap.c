/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:53:54 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 16:53:57 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*fail(t_list *new, void (*del)(void *))
{
	ft_lstclear(&new, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*cont_temp;
	t_list	*new_temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		cont_temp = f(lst->content);
		if (!cont_temp)
			return (fail(new, del));
		new_temp = ft_lstnew(cont_temp);
		if (!new_temp)
			return (fail(new, del));
		ft_lstadd_back(&new, new_temp);
		lst = lst->next;
	}
	return (new);
}
