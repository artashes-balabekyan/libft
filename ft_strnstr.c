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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*hay;
	unsigned char	*ned;
	unsigned char	*needle_pos;
	size_t		needle_len;
	size_t		found_len;

	needle_len = ft_strlen(needle);
	hay = (unsigned char *)haystack;
	ned = (unsigned char *)needle;
	needle_pos = (unsigned char *)haystack;
	found_len = 0;
	while (*hay && len--)
	{
		if (*hay++ == *ned)
		{
			ned++;
			found_len++;
			needle_pos = hay;
		}
		else
			found_len = 0;
		if (found_len == needle_len)
			return ((char *)needle_pos - needle_len);
	}
	return (NULL);
}
