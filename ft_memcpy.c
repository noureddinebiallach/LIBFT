/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:10:30 by nbiallac          #+#    #+#             */
/*   Updated: 2026/10/24 15:53:18 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    size_t  i;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i != n)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (dest);
}
int main()
{
    char dest[10];
    char src[10]="hello";
    memcpy(dest,src,2);
    printf("%s",dest);
}