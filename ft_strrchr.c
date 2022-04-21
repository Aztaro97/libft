/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:38:35 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/12 12:23:41 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			t = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (t);
}
