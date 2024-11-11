/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:05:33 by staylan           #+#    #+#             */
/*   Updated: 2024/11/11 20:17:39 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = ft_strlen(s1);
	while (a < b && ft_strchr(set, s1[a]))
		a++;
	while (a < b && ft_strchr(set, s1[b - 1]))
		b--;
	return (ft_substr(s1, a, b - a));
}
