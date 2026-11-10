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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strlcpy(char *dst, char *src, size_t size)
{
	if (ft_strlen(dst) < size)
	{
		ft_memcpy(dst, src, ft_strlen(dst))
		dst[ft_strlen(dst) + 1] = '\0';
	}
	else
	{
		ft_memcpy(dst, src, size)
	}
	return (ft_strlen(src));
}
