#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *d = dst;
	size_t dst_size = ft_strlen(d);
	if (dstsize == 0 || dstsize > dst_size)
		return (0);
	d = d + dst_size - 1;
	while(dstsize > 1 && *src)
	{
		*d++ = *src++;
		dstsize--;
	}
	*d = 0;
	return (ft_strlen(dst));
}
