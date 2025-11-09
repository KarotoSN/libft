/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:17:05 by aarab             #+#    #+#             */
/*   Updated: 2025/11/09 01:35:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
    if (!lst || !new)
	{
		return ;
	}
	if(!*lst)
	{
		*lst = new;
		return ;
	}
    last = ft_lstlast(*lst);
	
	last->next = new;
    
}