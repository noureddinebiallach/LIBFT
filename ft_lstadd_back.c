/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 02:59:49 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 03:37:50 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print(t_list *first)
{
	t_list	*copy;

	copy = first;
	while (copy != NULL)
	{
		printf("%d\n", *(int *)copy->content);
		copy = copy->next;
	}
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*copy;

	if (!lst || !new)
		return ;
	new->next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	copy = *lst;
	while (copy->next != NULL)
		copy = copy->next;
	copy->next = new;
}

int	main(void)
{
	int a = 3;
	int b = 2;
	int c = 7;
	int f = 0;
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *node4;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node1->content = &b;
	node2->content = &a;
	node3->content = &c;
	node4->content = &f;

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstadd_back(&head, node4);
	print(head);
}