/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:36:40 by aarab             #+#    #+#             */
/*   Updated: 2025/11/08 15:10:51 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t length)
{
	size_t	i;

	if ((!str1 && !str2) || lenght)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && i < length)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
