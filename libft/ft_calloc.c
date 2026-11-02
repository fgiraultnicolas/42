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

#include <stdlib.h>

void	*ft_calloc(int n, size_t v_type)
{
	void	*ptr;
	int		i;

	if (n == 0 || v_type == 0)
		return (0);
	ptr = malloc(vtype * n);
	if (ptr = 0)
		return (0);
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr)
}
