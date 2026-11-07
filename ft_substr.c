/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 07:14:24 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/31 07:16:30 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sustr;
	size_t	i;
	size_t	lenmax;

	i = 0;
	if (!s)
		return (NULL);
	lenmax = ft_strlen(s);
	if (start >= lenmax)
		len = 0;
	else if (len > lenmax - start)
		len = lenmax - start;
	sustr = malloc(len + 1);
	if (!sustr)
		return (NULL);
	while (i < len)
	{
		sustr[i] = s[start + i];
		i++;
	}
	sustr[i] = '\0';
	return ((char *)sustr);
}
