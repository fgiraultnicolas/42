/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:52:12 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/12 12:17:00 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_fd(int n, int fd) {
  if (n == -2147483648) {
    write(fd, "-2147483648", 11);
    return;
  }
  if (n < 0) {
    ft_putchar_fd('-', fd);
    n *= -1;
  }
  if (n < 10)
    ft_putchar_fd(n + '0', fd);
  else {
    ft_putnbr_fd(n / 10, fd);
    ft_putnbr_fd(n % 10, fd);
  }
}
