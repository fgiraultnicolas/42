/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:38:15 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/24 15:45:11 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_strcpy(char *dest, char *src) {
  int i;

  i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = src[i];
  return (dest);
}

char *ft_strdup(const char *src) {
  char *dup;

  dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
  return (ft_strcpy(dup, (char *)src));
}
