/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:00:31 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/29 16:52:37 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	len(int i, int j, int size, char **strs)
{
	int	count;

	count = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			i++;
			count++;
		}
		j++;
	}
	return (count);
}

char	*modified_strcpy_sep(char *dest, char *sep)
{
	while (*sep != '\0')
	{
		*dest = *sep;
		dest++;
		sep++;
	}
	return (dest);
}

char	*modified_strcpy(char *dest, char **strs, int j)
{
	int	i;

	i = 0;
	while (strs[j][i] != '\0')
	{
		*dest = strs[j][i];
		i++;
		dest++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		j;
	int		count;

	if (size == 0)
	{
		dest = malloc(sizeof(char));
		*dest = '\0';
		return (dest);
	}
	count = len(0, 0, size, strs);
	dest = malloc(sizeof(char) * (count + (size - 1) * len(0, 0, 1, &sep) + 1));
	if (dest == 0)
		return (0);
	j = 0;
	while (j < size)
	{
		dest = modified_strcpy(dest, strs, j);
		if (j != (size - 1))
			dest = modified_strcpy_sep(dest, sep);
		j++;
	}
	*dest = '\0';
	return (dest - (count + (size - 1) * len(0, 0, 1, &sep)));
}

/*int	main(int argc, char **argv)
{
	argv++;
	printf("%s\n", ft_strjoin(argc - 1, argv, ", "));
	return (0);
}*/
