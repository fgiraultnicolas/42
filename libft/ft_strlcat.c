/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 05:17:52 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/03 12:00:31 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stddef.h>
#include <stdio.h>

size_t ft_strlcat(char *dest, char *src, size_t size) {
  size_t i;
  size_t j;
  size_t real_size;

  i = 0;
  j = 0;
  real_size = size - ft_strlen(dest) - 1;
  if (size < ft_strlen(dest))
    return (size);
  while (dest[i] != '\0')
    i++;
  while (j < real_size) {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  return (ft_strlen(dest) + ft_strlen(src));
}

int main(int argc, char **argv) {
  char dest[15] = "test";
  printf("%zu\n", strlcat(dest, "te", 5));
  printf("%s\n", dest);
  printf("%s\n", ft_strlcat());
  return (0);
}
