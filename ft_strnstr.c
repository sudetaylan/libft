/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:11:51 by staylan           #+#    #+#             */
/*   Updated: 2024/11/11 20:20:43 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	sizeneedle;

	sizeneedle = ft_strlen(needle);
	if (sizeneedle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (j < sizeneedle && (i + j) < len && haystack[i + j] == needle[j])
			j++;
		if (j == sizeneedle)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
