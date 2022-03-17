#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *d = dst;
	char *s = (char *)src;
	while(dstsize > 1 && *src)
	{
		*d++ = *src++;
		dstsize--;
	}
	*d++ = 0;
	return (ft_strlen(s));
}
