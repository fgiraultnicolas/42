char	*strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)	
		s++;
	if (*s == c)
		return (s);
	else
		return (0);
}
