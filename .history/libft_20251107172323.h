/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarab <aarab@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:41:26 by aarab             #+#    #+#             */
/*   Updated: 2025/11/07 17:23:23 by aarab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
// #include "libft.h"

# include <bsd/string.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

size_t	ft_strlen(const char *s)
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t count);
int		ft_toupper(int c);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*strnstr(const char *big, const char *little, size_t len);
char	**ft_split(char const *s, char c);

#endif