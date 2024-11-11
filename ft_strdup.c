/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:31 by staylan           #+#    #+#             */
/*   Updated: 2024/11/11 20:13:13 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*ptr;

	i = -1;
	size = ft_strlen(s1);
	ptr = (char *) malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	while (++i < size)
		ptr[i] = s1[i];
	ptr[i] = '\0';
	return (ptr);
}
