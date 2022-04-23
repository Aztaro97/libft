/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataro-ga <abdoulaziztarogao@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:08:23 by ataro-ga          #+#    #+#             */
/*   Updated: 2022/04/24 00:08:23 by ataro-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list *lst, void (*del)(void*)))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
