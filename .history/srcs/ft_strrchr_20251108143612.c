/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:37:22 by aarab             #+#    #+#             */
/*   Updated: 2025/11/08 14:36:12 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int charset)
{
	int i;

	if (!s || !charset)
		return (0);
	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (s[i] == charset)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}