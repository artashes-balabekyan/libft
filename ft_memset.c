/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcloud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:23:43 by xcloud            #+#    #+#             */
/*   Updated: 2022/03/12 17:24:00 by xcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *destination, int c, t_size_t n)
{
	char	*dst;

	dst = (char *)destination;
	while (n--)
		*dst++ = c;
	return (destination);
}
