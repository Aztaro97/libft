/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:24:39 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/09 16:52:50 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s \n", ft_memchr("Hello World", 'e', 2));
	return (0);
}
