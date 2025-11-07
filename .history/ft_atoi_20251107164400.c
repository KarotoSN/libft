/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:31:12 by aarab             #+#    #+#             */
/*   Updated: 2025/11/07 16:44:00 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str);
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
	}
	while (str[i] >= '0' && str[i] <= '10')
	{
		res = res * 10 + (str[i] - '0');
	}
	return (res * sign);
}

int main()
{
    char a[] = "-"
}