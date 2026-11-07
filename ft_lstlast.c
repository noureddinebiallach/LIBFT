/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 02:28:36 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 03:13:38 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	main(void)
{
	t_list *nd1 = malloc(sizeof(t_list));
	t_list *nd2 = malloc(sizeof(t_list));
	t_list *nd3 = malloc(sizeof(t_list));
	t_list *nd4 = malloc(sizeof(t_list));
	t_list *nd5 = malloc(sizeof(t_list));
	t_list *nd6 = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	nd1->content = &a;
	nd2->content = &b;
	nd3->content = &c;
	nd4->content = &d;
	nd5->content = &e;
	nd1->next = nd2;
	nd2->next = nd3;
	nd3->next = nd4;
	nd4->next = nd5;
	nd5->next = nd6;

	printf("%d\n", *(int *)ft_lstlast(nd1)->content);
}