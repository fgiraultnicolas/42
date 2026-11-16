/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:37:24 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/16 09:37:28 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char *strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s != '\0')
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	if (*s == c)
		tmp = (char *)s;
	return (tmp);
}
