/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 05:48:56 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/19 17:26:39 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c) {
  while ((unsigned char)*s != '\0' && *s != (unsigned char)c)
    s++;
  if ((unsigned char)*s == (unsigned char)c)
    return ((char *)s);
  else
    return (0);
}
