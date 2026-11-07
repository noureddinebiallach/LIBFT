/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 06:09:01 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 06:13:14 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
        return;
    del((lst)->content);
    free(lst);
}