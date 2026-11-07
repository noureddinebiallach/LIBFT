/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:21:13 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/02 21:01:10 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	substr_len(char const *s, size_t i, char c)
{
	size_t	old_i;

	old_i = i;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i - old_i);
}

static char	*substr_cpy(char const *s, size_t *start, char c, char *sustr)
{
	size_t	i;

	i = 0;
	while (s[*(start) + i] && s[*(start) + i] != c)
	{
		sustr[i] = s[*(start) + i];
		i++;
	}
	*start = *start + i;
	sustr[i] = '\0';
	return (sustr);
}

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c)
		{
			n++;
			while (s[i] != c && s[i])
				i++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (n);
}

static void	free_all(char **arr, size_t n)
{
	while (n > 0)
		free(arr[--n]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**strofarr;
	size_t	counter;
	size_t	n;

	counter = 0;
	n = 0;
	strofarr = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!strofarr)
		return (NULL);
	while (s[counter] != '\0')
	{
		while (s[counter] && s[counter] == c)
			counter++;
		strofarr[n] = malloc(sizeof(char) * (substr_len(s, counter, c) + 1));
		if (!strofarr[n])
		{
			free_all(strofarr, n);
			return (NULL);
		}
		substr_cpy(s, &counter, c, strofarr[n]);
		n++;
	}
	strofarr[n] = NULL;
	return (strofarr);
}
