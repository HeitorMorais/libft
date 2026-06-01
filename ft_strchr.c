/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:07:25 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 17:07:26 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	*p;

	while (*s)
	{
		if (*s == (unsigned char) c)
		{
			p = s;
			return (p);
		}
		s++;
	}
	if ((unsigned char)c == 0)
	{
		p = s;
	}
	else
	{
		p = NULL;
	}
	return (p);
}
