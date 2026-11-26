/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:37:24 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/26 11:25:09 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while ((unsigned char)*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			tmp = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		tmp = (char *)s;
	return (tmp);
}
