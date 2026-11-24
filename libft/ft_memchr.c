/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 05:48:56 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/17 05:48:56 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  size_t i;
  unsigned char *edit_s;

  i = 0;
  edit_s = (unsigned char *)s;
  while (i < n) {
    if (*edit_s == (unsigned char)c)
      return ((void *)edit_s);
    edit_s++;
    i++;
  }
  return (0);
}
