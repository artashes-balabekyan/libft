char	*ft_strcpy(char *dest, const char *src)
{
	char *final;

	final = dest;
	while (*src != 0)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (final);
}