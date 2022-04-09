/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:42:47 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/03/28 21:43:36 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		((char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	printf("%p \n", ft_memset("Hello", 'e', 2));

	return (0);
}