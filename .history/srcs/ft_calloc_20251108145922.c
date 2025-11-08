/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:26:05 by marvin            #+#    #+#             */
/*   Updated: 2025/11/08 14:59:22 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = malloc(elementCount * elementSize);
	if (!str)
		return (NULL);
		if (i >= 0)
		{
			while (i < elementSize)
			{
				str[i] = 0;
			}
			return ((void *)str);
		}
	return (NULL);
}
