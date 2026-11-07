/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 01:16:28 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 03:13:29 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

int	main(void)
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char d = 'd';
	t_list *n1;
	n1 = malloc(sizeof(t_list));
	t_list *n2;
	n2 = malloc(sizeof(t_list));
	t_list *n3;
	n3 = malloc(sizeof(t_list));
	t_list *n4;
	n4 = malloc(sizeof(t_list));
	t_list *n5;
	n5 = malloc(sizeof(t_list));
	n1->content = &a;
	n2->content = &b;
	n3->content = &c;
	n4->content = &d;
	n5 = NULL;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	ft_lstsize(n1);
}