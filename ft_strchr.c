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
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    if (*s == c)
            return ((char *)s);
    while (*s++){
        if (*s == c)
            return ((char *)s);
    }
    return (NULL);
}
