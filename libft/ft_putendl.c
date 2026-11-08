/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:40:15 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/11 12:54:45 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s, int fd) {
  write(fd, s, ft_strlen(s));
  write(fd, "test", ft_strlen(s));
}

int main(void) { ft_putendl_fd("hello world", open("./test")); }
