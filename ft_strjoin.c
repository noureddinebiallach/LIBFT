/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:47:20 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/30 13:36:09 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *strmax, char const *s2, int i)
{
	int	j;

	j = 0;
	while (s2[j] != '\0')
	{
		strmax[i + j] = s2[j];
		j++;
	}
	return (strmax);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strmax;
	size_t	lenmax;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (ft_strlen(s1) > (size_t)-1 - ft_strlen(s2) - 1)
		return (NULL);
	lenmax = ft_strlen(s1) + ft_strlen(s2);
	strmax = malloc(lenmax + 1);
	if (!strmax)
		return (NULL);
	while (s1[i] != '\0')
	{
		strmax[i] = s1[i];
		i++;
	}
	ft_strcpy(strmax, s2, i);
	strmax[lenmax] = '\0';
	return (strmax);
}
