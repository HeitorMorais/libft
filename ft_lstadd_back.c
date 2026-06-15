/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:46:13 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 16:47:55 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!new || !lst)
		return ;
	current = *lst;	
	if(!current)
	{
		*lst = new;
		return;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;

}
