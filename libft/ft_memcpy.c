/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:21:32 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/17 05:48:56 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*edit_src;
	unsigned char		*edit_dest;

	i = 0;
	edit_src = src;
	edit_dest = dest;
	while (i < n)
	{
		edit_dest[i] = edit_src[i];
		i++;
	}
	return (dest);
}
