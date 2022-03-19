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

void *ft_memset(void *destination, int c, size_t n)
{
    unsigned long int i;
    char *dst = (char *)destination;
    i = 0;
    while (i < n)
    {
        dst[i] = c;
        i++;
    }
    return (destination);
}
