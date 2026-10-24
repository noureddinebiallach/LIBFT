/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:15:53 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/20 11:19:13 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	*ft_bzero(void *str, unsigned int n)
{
	unsigned char	*ustr;
	unsigned int	i;

	ustr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ustr[i] = '0';
		i++;
	}
	return (str);
}

int main()
{
	
}