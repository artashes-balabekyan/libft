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
#include <stdlib.h>
#include "./libft.h"

int main(void)
{
	printf("is_alpha '5' - %d\n", ft_isalpha('5'));
	printf("is_digit '5' - %d\n", ft_isdigit('5'));
	printf("is_alnum '-' - %d\n", ft_isalnum('-'));
	printf("is_ascii 128 - %d\n", ft_isascii(128));
	printf("ft_isprint 128 - %d\n", ft_isprint(127));
	printf("ft_strlen 128 - %zu\n", ft_strlen("128"));

	char src[15] = "1234567890";
	ft_memset(src, 'c', 5);
	printf("ft_memset: 1234567890 1 %s\n", src);

	char memsetsrc[15] = "1234567890";
	memset(memsetsrc, 'c', 5);
	printf("memset: 1234567890 1 %s\n", memsetsrc);

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
	int ft_strlcpy_length = (int)ft_strlcpy(ft_strlcpydst, ft_strlcpysrc, 0);
	printf("ft_strlcpy: %s\n", ft_strlcpydst);
	printf("ft_strlcpy_length: %d\n", ft_strlcpy_length);

	char strlcatsrc[10] = "12345678";
	char strlcatdst[30] = "23ssssfgdfgsdfgsdfgsdfgdsfgd";
	strlcatdst[10] = '$';
	int strlcat_length = strlcat(strlcatdst, strlcatsrc, 6);
	printf("strlcat: %s\n", strlcatdst);
	printf("strlcat_length: %d\n", strlcat_length);

	char ft_strlcatsrc[10] = "12345678";

	char ft_strlcatdst[30] = "23ssssfgdfgsdfgsdfgsdfgdsfgd";
	ft_strlcatdst[10] = '$';
	int ft_strlcat_length = (int)ft_strlcat(ft_strlcatdst, ft_strlcatsrc, 6);
	printf("ft_strlcat: %s\n", ft_strlcatdst);
	printf("ft_strlcat_length: %d\n", ft_strlcat_length);

	printf("toupper - %d\n", toupper(107));
	printf("ft_toupper - %d\n", ft_toupper(107));

	printf("tolower - %d\n", tolower(85));
	printf("ft_tolower - %d\n", ft_tolower(85));

	printf("strchr - %s\n", strchr("asdfba", 'a'));
	printf("ft_strchr - %s\n", ft_strchr("asdfba", 'a'));

	printf("strrchr - %s\n", strrchr("bonjourno" + 2, 0));
	printf("ft_strrchr - %s\n", ft_strrchr("bonjourno" + 2, 0));

	// char strncmpsrc[10] = "3";
	// char strncmpdst[30] = "3";
	printf("strncmp - %d\n", strncmp("test\200", "test\0", 6));

	// char ft_strncmpsrc[10] = "3";
	// char ft_strncmpdst[30] = "3";
	printf("ft_strncmp - %d\n", ft_strncmp("test\200", "test\0", 6));

	printf("memchr - %s\n", memchr("aonjourno", 97, 10));
	printf("ft_memchr - %s\n", ft_memchr("aonjourno", 97, 10));

	printf("memcmp - %d\n", memcmp("", "test\0", 10));
	printf("ft_memcmp - %d\n", ft_memcmp("", "test\0", 10));

	printf("strnstr - %s\n", strnstr("lorem ipsum dolor sit amet", "", 15));
	printf("ft_strnstr - %s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 15));
}
