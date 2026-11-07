/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:28:48 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/05 10:13:13 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	int	c;
	int	i;
	int	*p;
	int	n;

	c = 1337;
	i = 0;
	p = &i;
	n = 0;
	while (n < 4)
	{
		ft_memset((unsigned char *)&p[n], (unsigned char)c, 1);
		n++;
	}
}
