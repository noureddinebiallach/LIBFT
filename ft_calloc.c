/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:06:31 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/30 20:10:41 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	total;

	total = size * nmemb;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}
