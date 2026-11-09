/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:15:30 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/09 10:30:06 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
  char *new_string;
  unsigned int i;

  new_string = malloc(sizeof(char) * (ft__strlen(s) + 1));
  if (new_string == 0)
    return (0);
  i = 0;
  while (s[i] != '\0') {
    new_string[i] = f(i, s[i]);
    i++;
  }
  new_string[i] = '\0';
  return (new_string);
}
