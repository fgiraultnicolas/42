/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:33:38 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/10 11:20:19 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*edit_dest;
	const unsigned char	*edit_src;

	i = 0;
	edit_dest = dest;
	edit_src = src;
	while (i < n)
	{
		edit_dest[i] = edit_src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*edit_dest;   
	const unsigned char	*edit_src;

	edit_dest = dest;
	edit_src = src;
	if (dest < src)
	{
		while (n > 0)
		{
			edit_dest[n] = edit_src[n];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
