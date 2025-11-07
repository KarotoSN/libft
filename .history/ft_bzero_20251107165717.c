/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:31:16 by aarab             #+#    #+#             */
/*   Updated: 2025/11/07 16:57:17 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptn, size_t count)
{
	unsigned char	*res;
	size_t			i;

	res = (unsigned char *)ptn;
	i = 0;
	while (i < count - 1)
	{
		res[i++] = 0;
	}
}
/*
#include <stdio.h>
int main()
{
	char a[10] = "012346789";
	printf("%s \n", a);
	ft_bzero(a, 10);
	printf("%s \n", a);	
}*/