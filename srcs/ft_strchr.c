/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 00:29:28 by marvin            #+#    #+#             */
/*   Updated: 2025/11/09 01:03:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	size_t	i;

	i = 0;
	if (!s1)
	{
		return (NULL);
	}
	while (s1[i])
	{
		if (s1[i] == (char)c)
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s1[i]);
	return (NULL);
}

/*int	main(void)
{
	char	a[] = "Chainsaw man";

	printf("%s\n", ft_strchr(a, 'n'));
	printf("%s\n", strchr(a, 'n'));
}*/