/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:33:23 by aarab             #+#    #+#             */
/*   Updated: 2025/11/08 16:43:37 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*s;

	i = 0;
	if(len >= ft_strlen(dst))
		len = ft_strlen(dst);
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dest > s)
	{
		while (len > 0)
		{
			len--;
			dest[len] = s[len];
		}
	}
	else
	{
		while (i++ < len)
			dest[i] = s[i];
	}
	return (dst);
}

int main()
{
	char a[] = "Jeune pablito";
	char b[] = "sacre dozo";

	printf("%s\n",(char *)ft_memmove(a , b, 14));
	printf("%s",(char *)memmove(a, b, 10));

}
