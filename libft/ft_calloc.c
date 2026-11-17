/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault@fgirault@student.42.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:23:06 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/23 10:47:40 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int n, size_t v_type)
{
	unsigned char	*ptr;
	int				i;

	if (n * v_type > 2147483648)
		return (0);
	if (n == 0 || v_type == 0)
		return (0);
	ptr = malloc(v_type * n);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
