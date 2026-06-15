/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemorais <hemorais@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:13:33 by hemorais          #+#    #+#             */
/*   Updated: 2026/06/01 17:13:35 by hemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr((char *)set, s1[end - 1]))
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
