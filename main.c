/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalabek <balabekyanartashes@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:57:40 by abalabek          #+#    #+#             */
/*   Updated: 2022/03/11 21:26:35 by abalabek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "./libft.h"

int main(void)
{
	printf("is_alpha '5' - %d\n", ft_isalpha('5'));
	printf("is_digit '5' - %d\n", ft_isdigit('5'));
	printf("is_alnum '-' - %d\n", ft_isalnum('-'));
	printf("is_ascii 128 - %d\n", ft_isascii(128));
	printf("ft_isprint 128 - %d\n", ft_isprint(32));
	printf("ft_strlen 128 - %zu\n", ft_strlen("128"));

	unsigned char src[15] = "1234567890";
	ft_memset(src, '1', 10);
	printf("ft_memset: 1234567890 1 %s\n", src);

	unsigned char ss[15] = "1234567890";
	ft_bzero(ss, 10);
	printf("ft_memset 1234567890: %s\n", ss);

	unsigned char memcpysrc[10] = "123456";
	unsigned char memcpydst[10] = "dsssssds";
	ft_memcpy(memcpydst, memcpysrc, 6);
	printf("ft_memcpy: %s\n", memcpydst);

	unsigned char memmv[10] = "1234567890";
	ft_memmove(&memmv[3], &memmv[4], 6);
	printf("ft_memmove: %s\n", memmv);

	char strlcpysrc[10] = "12345678";
	char strlcpydst[10] = "23ssssssss";
	int strlcpy_length = (int)strlcpy(strlcpydst, strlcpysrc, 10);
	printf("strlcpy: %s\n", strlcpydst);
	printf("strlcpy_length: %d\n", strlcpy_length);

	char ft_strlcpysrc[10] = "12345678";
	char ft_strlcpydst[10] = "23ssssssss";
	int ft_strlcpy_length = (int)ft_strlcpy(ft_strlcpydst, ft_strlcpysrc, 10);
	printf("ft_strlcpy: %s\n", ft_strlcpydst);
	printf("ft_strlcpy_length: %d\n", ft_strlcpy_length);

	char strlcatsrc[10] = "12345678";
	char strlcatdst[10] = "23sssssssd";
	int strlcat_length = (int)strlcat(strlcatdst, strlcatsrc, 8);
	printf("strlcat: %s\n", strlcatdst);
	printf("strlcat_length: %d\n", strlcat_length);

	char ft_strlcatsrc[10] = "12345678";
	char ft_strlcatdst[10] = "23sssssssd";
	int ft_strlcat_length = (int)ft_strlcat(ft_strlcatdst, ft_strlcatsrc, 8);
	printf("ft_strlcat: %s\n", ft_strlcatdst);
	printf("ft_strlcat_length: %d\n", ft_strlcat_length);
}
