char *strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s != '\0')
	{
		if (*s == c)
			tmp = s;
		s++;
	}
	if (*s == c)
		tmp = s;
	return (tmp);
}
