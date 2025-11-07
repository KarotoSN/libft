/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:12:07 by aarab             #+#    #+#             */
/*   Updated: 2025/11/07 17:17:32 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2);
{
    size_t i;
    char *str;

    if(!s1 || !s2)
    {
        return (NULL);
    }
    
    i = 0;
    str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    
    while(s1[i])
    {
       str[x] = s1[i]; 
    }
    i = 0;
    while(s2[i])
    {
       str[x] = s2[i]; 
    }
    str[x]
    
}