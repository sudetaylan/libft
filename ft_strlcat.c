/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:08:26 by staylan           #+#    #+#             */
/*   Updated: 2024/11/11 20:22:42 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	b;

	i = 0;
	c = ft_strlen(dst);
	b = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize <= c)
		return (b + dstsize);
	while (src[i] != '\0' && c + i < dstsize - 1)
	{
		dst[c + i] = src[i];
		i++;
	}
	dst[c + i] = '\0';
	return (b + c);
}
