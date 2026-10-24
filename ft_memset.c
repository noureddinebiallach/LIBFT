/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:44:27 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/20 10:46:59 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*uc;
	unsigned char	p;
	unsigned int	i;

	uc = (unsigned char *)s;
	p = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		uc[i] = p;
		i++;
	}
	return (s);
}
