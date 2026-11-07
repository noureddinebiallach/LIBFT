/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:01:44 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 03:15:50 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (!dest || !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int s = 1137;
	int n = 13;
	int *p = &n;
	ft_memmove(p, &n, 1);
	printf("%d\n", s);
	memmove(&s, &n, 2);
	printf("%d", s);
}