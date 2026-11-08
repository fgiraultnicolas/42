/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault@fgirault@student.42.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:37:57 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/04 14:50:50 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr_overflow(char const *s, unsigned int start, size_t len) {
  size_t i;
  char *substring;

  i = 0;
  substring = malloc(sizeof(char) * (ft_strlen - start + 1));
  if (substring == 0)
    return (0);
  while (start < ft_strlen(s)) {
    substring[i] = s[start];
    start++;
    i++;
  }
  substring[i] = '\0';
  return (substring);
}

char *ft_substr_underflow(char const *s, unsigned int start, size_t len) {
  {
    size_t i;
    char *substring;

    i = 0;
    substring = malloc(sizeof(char) * (len + 1));
    if (substring == 0)
      return (0);
    while (i < len) {
      substring[i] = s[start];
      start++;
      i++;
    }
    substring[i] = '\0';
    return (substring);
  }

  char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (start + len > ft_strlen(s))
      return (ft_substr_overflow(s, start, len));
    else
      return (ft_substr_underflow(s, start, len));
  }
