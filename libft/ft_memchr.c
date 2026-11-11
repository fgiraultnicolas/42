void	*memchr(const void s[n], int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*s == c)
			return (s);
		s++;
		i++;
	}
	return (0);
}
