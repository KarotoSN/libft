/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 00:29:28 by marvin            #+#    #+#             */
/*   Updated: 2025/11/08 16:25:52 by aarab            ###   ########.fr       */
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
	return (NULL);
}
int	main(void)
{
	char	a[] = "Chainsaw man";

	printf("%s\n", ft_strrchr(a, ''));
	printf("%s", strrchr(a, ''));
}