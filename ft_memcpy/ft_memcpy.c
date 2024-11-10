/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sude <sude@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:57:44 by sude              #+#    #+#             */
/*   Updated: 2024/10/20 16:57:45 by sude             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if (dst == src || n == 0)
        return(dst);

    i = 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned const char *)src)[i];
        i++;
    }
    return (dst);
}