/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:08:48 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 17:08:50 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	while (*s1)
	{
		*s = *s1;
		s++;
		s1++;
	}
	while (*s2)
	{
		*s = *s2;
		s++;
		s2++;
	}
	*s = '\0';
	s -= len;
	return (s);
}
