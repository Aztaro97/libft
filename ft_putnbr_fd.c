/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:27:13 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/20 19:50:43 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	val;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		val = (unsigned int)(nb * -1);
	}
	else
		val = (unsigned int)nb;
	if (val >= 10)
		ft_putnbr_fd(val / 10, fd);
	ft_putchar_fd((char)(val % 10 + 48), fd);
}
