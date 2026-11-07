/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:31:00 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/30 20:06:53 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (src[i])
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (p < (size - 1) && src[p])
	{
		dst[p] = src[p];
		p++;
	}
	dst[p] = '\0';
	return (i);
}
