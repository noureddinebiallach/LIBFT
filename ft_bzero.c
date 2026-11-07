/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:15:53 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/30 20:11:47 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*ustr;
	size_t			i;

	ustr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ustr[i] = '0';
		i++;
	}
	return (str);
}
