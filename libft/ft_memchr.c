#include "header.h"

void	*ft_memchr(size_t n, const void *s, int c)
{
	size_t	i;
	unsigned char	*edit_s;

	i = 0;
	edit_s = (unsigned char *)s;
	while (i < n)
	{
		if (*edit_s == c)
			return ((void *)edit_s);
		edit_s++;
		i++;
	}
	return (0);
}
