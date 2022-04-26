/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:38:35 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/25 20:45:17 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	x;

	i = 0;
	x = ((char)c);
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == x)
			return (&((char *)s)[i]);
		i--;
	}
	if (i == 0)
	{
		if (s[i] == x)
			return (&((char *)s)[i]);
	}
	return (0);
}
