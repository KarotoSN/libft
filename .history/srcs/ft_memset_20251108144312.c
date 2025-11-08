/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:27:42 by aarab             #+#    #+#             */
/*   Updated: 2025/11/08 14:43:12 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptn, int value, size_t count)
{
	unsigned char	*tab;
	size_t			i;

	tab = (unsigned char *)ptn;
	i = 0;
	while (i < count - 1)
	{
		tab[i] = value;
		i++;
	}
	return (ptn);
}
