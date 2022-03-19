/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 01:02:29 by abalabek          #+#    #+#             */
/*   Updated: 2022/03/20 01:02:30 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, t_size_t n)
{
	char	*destination;
	char	*source;
	char	*ls;
	char	*ld;

	destination = dst;
	source = (char *)src;
	ls = (char *)source + (n - 1);
	ld = destination + (n - 1);
	if (destination < source)
		while (n--)
			*destination++ = *source++;
	else
	{
		while (n--)
			*ld-- = *ls--;
	}
	return (dst);
}
