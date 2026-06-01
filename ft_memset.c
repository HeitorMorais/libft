/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:59:23 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 16:59:24 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	if (!ptr)
	{
		return (NULL);
	}
	while (ptr && n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (dest);
}
