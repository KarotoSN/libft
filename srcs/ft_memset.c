/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:27:42 by aarab             #+#    #+#             */
/*   Updated: 2025/11/09 01:57:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptn, int value, size_t count)
{
	unsigned char	*tab;
	size_t			i;

	tab = (unsigned char *)ptn;
	if(!ptn || !tab )
		return (NULL);
	i = 0;
	while (i < count)
	{
		tab[i] = value;
		i++;
	}
	return (ptn);
}
