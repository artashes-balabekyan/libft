/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 01:17:57 by abalabek          #+#    #+#             */
/*   Updated: 2022/03/20 01:17:59 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = c;
	if (*s == cc)
		return ((char *)s);
	while (*s++)
	{
		if (*s == cc)
			return ((char *)s);
	}
	return (NULL);
}
