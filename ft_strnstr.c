/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:09:33 by abalabek          #+#    #+#             */
/*   Updated: 2022/04/07 01:09:35 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *) haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != 0 && j + i < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
