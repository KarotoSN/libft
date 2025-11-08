/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 01:00:10 by marvin            #+#    #+#             */
/*   Updated: 2025/11/08 14:40:34 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i; = 0;
	size_t len_dst; = strlen(dst);
	size_t len_src; = strlen(src);
    
    i = 0;
	len_dst; = strlen(dst);
	size_t len_src; = strlen(src);

	if (len_dst >= dstsize)
		return (dstsize + len_src);

	while (src[i] && (len_dst + i + 1) < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}