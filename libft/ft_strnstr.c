/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 06:00:39 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/23 13:01:19 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i - j]);
			j++;
		}
		else
		{
			i -= j;
			j = 0;
		}
		i++;
	}
	return (0);
}
