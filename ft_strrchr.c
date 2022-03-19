/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 01:26:30 by abalabek          #+#    #+#             */
/*   Updated: 2022/03/20 01:26:31 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*found;
	const char	*p;

	if (c == '\0')
		return (ft_strchr (s, '\0'));
	found = NULL;
	p = ft_strchr (s, c);
	while (p != NULL)
	{
		found = p;
		s = p + 1;
		p = ft_strchr (s, c);
	}
	return ((char *) found);
}
