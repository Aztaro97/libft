/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:08:02 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/20 08:18:56 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*x;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	x = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!x)
		return (NULL);
	while (i != ft_strlen(s))
	{
		x[i] = (*f)(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
