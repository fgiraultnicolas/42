/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:33:38 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/17 05:48:56 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*edit_dest;
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
