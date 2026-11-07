/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:53:49 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/30 20:06:37 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	dest_len(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ls;
	size_t	ld;
	size_t	i;

	ls = ft_strlen(src);
	ld = dest_len(dest, size);
	if (size <= ld)
		return (size + ls);
	i = 0;
	while ((ld + i + 1) < size && src[i] != '\0')
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}
