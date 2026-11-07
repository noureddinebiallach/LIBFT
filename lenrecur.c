/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenrecur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 21:16:11 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/05 10:14:18 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_str(const char *str,int i)
{
    if (str[0] == 0)
        return(0);
    if (str[++i])
    {
        i = (ft_str(str,i));
    }
    return (i);
}


int main()
{
    int i = 0;
    char p[] = "";
    printf("%d",ft_str(p,i));
}