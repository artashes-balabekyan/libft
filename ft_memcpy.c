
#include "./libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *destination = dst;
    const char *source = src;
    while (n--)
    {
        *destination++ = *source++;
    }
    return (0);
}