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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ptr;

	substr = malloc(len * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_bzero(substr, len);
	ptr = substr;
	while (start)
	{
		s++;
		start--;
	}
	while (*s)
	{
		*ptr += *(char *)s;
		ptr++;
		s++;
	}
	return (substr);
}
