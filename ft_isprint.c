/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:46:09 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/03/28 20:03:05 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isprint('~'));
	return (0);
}
