/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:59:38 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/21 17:00:28 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == '\0' && s[i] != c ))
			words++;
		i++;
	}
	return (words);
}

int	ft_isspace(char c, char cd)
{
	if (c == cd)
		return (1);
	return (0);
}

char	*ft_word(char *str, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!word)
		return (0);
	while (str[i] && !ft_isspace(str[i], c) && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	int		i;
	char	**words;

	i = 0;
	if (!str)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_count(str, c) + 1));
	if (!words)
		return (NULL);
	while (*str == c)
		str++;
	i = 0;
	while (*str)
	{
		words[i] = ft_word(str, c);
		while (*str && !ft_isspace(*str, c))
			str++;
		while (*str && ft_isspace(*str, c))
			str++;
		i++;
	}
	words[i] = NULL;
	return (words);
}
