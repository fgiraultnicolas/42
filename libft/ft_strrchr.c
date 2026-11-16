#include "header.h"

char *strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s != '\0')
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	if (*s == c)
		tmp = (char *)s;
	return (tmp);
}
