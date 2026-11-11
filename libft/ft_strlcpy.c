/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 06:21:08 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/10 11:51:25 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t  i;

        i = 0;
        while (i < n)
        {
                dest[i] = src[i];
                i++;
        }
        return (dest);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	else if (ft_strlen(src) <= size)
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	else
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (ft_strlen(src));
}
