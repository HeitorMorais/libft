/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:12:55 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 17:12:56 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (unsigned char) c)
		{
			p = s;
		}
		s++;
	}
	if ((unsigned char)c == 0)
		p = s;
	return (p);
}
