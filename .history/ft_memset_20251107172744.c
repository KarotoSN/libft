/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:27:42 by aarab             #+#    #+#             */
/*   Updated: 2025/11/07 17:27:44 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptn, int value, size_t count)
{
	unsigned char	*res;
	size_t			i;

	res = (unsigned char *)ptn;
	i = 0;
	while (i < count - 1)
	{
		res[i] = value;
		i++;
	}
	return (ptn);
}