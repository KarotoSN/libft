/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:36:40 by aarab             #+#    #+#             */
/*   Updated: 2025/11/08 16:13:56 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t length)
{
	size_t	i;

	if ((!str1 && !str2) || !length)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && i < length - 1)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
int main()
{
	char a[] = "Chainsaw Aan";
	char b[] = "Chainsaw Bir";
	
	printf("fake -> %d\n", ft_strncmp(a,b, 10));
	printf("vreel -> %d", strncmp(a,b, 10));
}