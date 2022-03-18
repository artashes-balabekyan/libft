#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *d = dst;
	size_t dst_size = ft_strlen(d);
	size_t total = ft_strlen(dst) + ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_size)
		return (ft_strlen(dst) + dstsize - 1);
	d = d + dst_size;
	while(dstsize - dst_size > 1 && *src)
	{
		*d++ = *src++;
		dstsize--;
	}
	*d = 0;
	return (total);
}
