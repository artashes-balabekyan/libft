#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *d = dst;
	char *s = (char *)src;
	size_t size = ft_strlen(s);
	if (dstsize == 0)
		return (size);
	while(dstsize > 1 && *src)
	{
		*d++ = *src++;
		dstsize--;
	}
	*d++ = 0;
	return (size);
}
