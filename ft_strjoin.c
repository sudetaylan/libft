/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:01:16 by staylan           #+#    #+#             */
/*   Updated: 2024/11/11 20:15:02 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ss1;
	int		ss2;
	char	*str;

	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	str = (char *) malloc(ss1 + ss2 + 1);
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		str[i] = s1[i];
	i = 0;
	while (s2[i] != '\0')
		str[ss1++] = s2[i++];
	str[ss1] = '\0';
	return (str);
}
