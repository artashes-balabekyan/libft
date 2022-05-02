/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:33:35 by abalabek          #+#    #+#             */
/*   Updated: 2022/04/06 23:33:36 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, t_size_t n)
{
	unsigned char	ch;
	t_size_t		i;
	unsigned char	*src;

	src = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*src == ch)
			return (src);
		i++;
		src++;
	}
	return (NULL);
}
