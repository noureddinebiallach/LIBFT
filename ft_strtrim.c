/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:34:48 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/30 21:14:08 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	backword(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (s1[j])
	{
		i = 0;
		while (set[i])
		{
			if (s1[j] == set[i])
				break ;
			i++;
		}
		if (s1[j] != set[i])
			break ;
		j--;
	}
	return (j);
}

size_t	forword(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (s1[j])
	{
		i = 0;
		while (set[i])
		{
			if (s1[j] == set[i])
				break ;
			i++;
		}
		if (s1[j] != set[i])
			break ;
		j++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	f;

	f = 0;
	j = backword(s1, set);
	i = forword(s1, set);
	p = malloc(j - i + 2);
	if (!p)
		return (NULL);
	while (i + f <= j)
	{
		p[f] = s1[i + f];
		f++;
	}
	p[f] = '\0';
	return (p);
}
