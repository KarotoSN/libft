/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:26:05 by marvin            #+#    #+#             */
/*   Updated: 2025/11/08 16:03:47 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned char	*str;

	str = malloc(elementCount * elementSize);
	if (!str)
		return (NULL);
	ft_bzero(str, elementCount * elementSize);
	return (str);
}
int main()
{
    char a[] = "Chainsaw Man";
    a = (char)ft_calloc(4, 1);
    printf("%s", ft_calloc(4, 1););
}