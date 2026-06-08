/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:30:29 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/08 18:47:08 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	psize;

	psize = nmemb * size;
	if (nmemb != 0 && psize / nmemb != size)
		return (NULL);
	p = malloc(psize);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_bzero(p, psize);
	return (p);
}
