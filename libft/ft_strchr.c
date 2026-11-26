/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 05:48:56 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/26 11:25:09 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)*s != '\0' && (char)*s != (char)c)
		s++;
	if ((char)*s == (char)c)
		return ((char *)s);
	else
		return (0);
}
