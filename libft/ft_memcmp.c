/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 05:17:24 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/16 06:56:47 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sa;
	const unsigned char	*sb;

	i = 0;
	sa = s1;
	sb = s2;
	while (i < n)
	{
		if (*sa != *sb)
			return (*sa - *sb);
		sa++;
		sb++;
		i++;
	}
	return (0);
}
