/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:12:42 by abalabek          #+#    #+#             */
/*   Updated: 2022/05/02 22:12:43 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "./libft.h"

void	*ft_calloc(t_size_t count, t_size_t size)
{
	char	*i;

	i = malloc(count * size);
	if (!i)
	{
		free(i);
		return (NULL);
	}
	ft_bzero(i, size * count);
	return ((void *)i);
}
