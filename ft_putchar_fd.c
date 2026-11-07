/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:46:08 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 03:13:21 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd = open("test.txt", O_RDONLY | O_CREAT);
	// ft_putchar_fd('C',fd);
	write(fd, "hello", 5);
}