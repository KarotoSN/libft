/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:37:22 by aarab             #+#    #+#             */
/*   Updated: 2025/11/08 16:28:18 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int charset)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)charset)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

int	main()
{
	char	a[] = "Chainsaw man";

	printf("%s\n", ft_strrchr(a, 's'));
	printf("%s", strrchr(a, 's'));
}
