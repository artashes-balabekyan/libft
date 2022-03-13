
#include "./libft.h"
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned long int i;
    char *destination = dst;
    const char *source = src;
    i = 0;
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (0);
}