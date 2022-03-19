
#include "./libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *destination = dst;
    const char *source = src;
    while (n--)
    {
        *destination++ = *source++;
    }
    return (dst);
}
