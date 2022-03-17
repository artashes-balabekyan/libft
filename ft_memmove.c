
#include "./libft.h"

void *ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
    char *destination = dst;
    const char *source = src;
    if (destination < source)
        while (n--)
            *destination++ = *source++;
    else
    {
        char *ls = (char *)source + (n - 1);
        char *ld = destination + (n - 1);
        while (n--)
            *ld-- = *ls--;
    }
    return dst;
}