#include "./libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize)
{
	char *d = dst;
	char *s = (char *)src;
	t_size_t size = ft_strlen(s);
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
