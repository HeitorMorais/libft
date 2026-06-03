/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:13:58 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 17:14:07 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_size(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (ft_strlen(s) < start)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (ft_strlen(s) - start > len)
	{
		size = len + 1;
	}
	else
	{
		size = ft_strlen(s) - start + 1;
	}
	substr = malloc(size);
	if (substr == NULL)
		return (NULL);
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ptr;

	substr = allocate_size(s, start, len);
	if (!substr)
		return (NULL);
	ptr = substr;
	while (start && *s)
	{
		s++;
		start--;
	}
	while (*s && len)
	{
		*ptr = *s;
		ptr++;
		s++;
		len--;
	}
	*ptr = '\0';
	return (substr);
}
