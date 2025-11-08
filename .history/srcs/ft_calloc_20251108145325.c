/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:26:05 by marvin            #+#    #+#             */
/*   Updated: 2025/11/08 14:53:25 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned char	*str;

    if (elementSize > 0)
    {
        return (NULL);
    }
	str = malloc(elementCount * elementSize);
	if (!str)
		return (NULL);
	while ()
	return ((void *)str);
}
