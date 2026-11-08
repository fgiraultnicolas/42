/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault@fgirault@student.42.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:27:17 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/04 13:27:21 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*putnbr_itoa_pos(int n, char *ascii)
{
	size_t	i;

	i = int_len(n);
	ascii[i] = '\0';
	while (n != 0)
	{
		i--;
		ascii[i] = n % 10 + '0';
		n = n / 10;
	}
	return (ascii);
}

char	*putnbr_itoa_neg(int n, char *ascii)
{
	size_t	i;

	i = int_len(n) + 1;
	ascii[i] = '\0';
	while (n != 1)
	{
		i--;
		ascii[i] = n % 10 + '0';
		n = n / 10;
	}
	i--;
	ascii[i] = '-';
	return (ascii);
}

char	*ft_itoa(int n)
{
	char	*ascii;

	if (n < 0)
	{
		ascii = malloc(sizeof(char) * (int_len(n) + 2));
		ascii = putnbr_itoa_neg(n, ascii);
		if (ascii == 0)
			return (0);
	}
	else
	{
		ascii = malloc(sizeof(char) * (int_len(n) + 1));
		ascii = putnbr_itoa_pos(n, ascii);
		if (ascii == 0)
			return (0);
	}
	return (ascii);
}

int		main(void)
{
	printf("%s\n", ft_itoa(-12345));
	return (0);
}
