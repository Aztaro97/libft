/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:55:21 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/09 17:18:45 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
        {
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char s1[] = "hello";
    char s2[] = "word";
    printf("%d \n", ft_memcmp(s1, s2, 5));
    return (0);
}