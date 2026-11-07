/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:09:54 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/02 19:17:56 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static char	*ssubf(unsigned int number, long cpyn, int n)
{
	char	*p;

	p = malloc(sizeof(char) * number + 1);
	if (!p)
		return (NULL);
	p[number--] = '\0';
	if (cpyn < 0)
	{
		cpyn = -cpyn;
		p[0] = '-';
	}
	while (cpyn != 0)
	{
		n = cpyn % 10;
		p[number--] = n + '0';
		cpyn = cpyn / 10;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	char			*str;
	long			cpyn;

	cpyn = n;
	number = 0;
	if (cpyn == 0)
	{
		str = "0";
		return (str);
	}
	if (cpyn < 0)
		number++;
	while (cpyn != 0)
	{
		cpyn = cpyn / 10;
		number++;
	}
	cpyn = n;
	return (ssubf(number, cpyn, n));
}
