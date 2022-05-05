/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 01:19:41 by abalabek          #+#    #+#             */
/*   Updated: 2022/03/20 01:19:43 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	char		*s;
	size_t	size;

	d = dst;
	s = (char *)src;
	size = ft_strlen(s);
	if (dstsize == 0)
		return (size);
	while (dstsize > 1 && *src)
	{
		*d++ = *src++;
		dstsize--;
	}
	*d++ = 0;
	return (size);
}
