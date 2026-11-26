/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:20:49 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/26 11:25:09 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_atoi(const char *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13) || *str == '+'
		|| *str == '-'
		|| *str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		str++;
		i++;
	}
	return (i);
}

static int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

const char	*skip(const char *str)
{
	int	minus_bool;
	int	nb;
	int	power;

	minus_bool = 0;
	power = ft_strlen_atoi(str);
	nb = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		minus_bool = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str == '0')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	str = skip(str);
	while (*str >= '0' && *str <= '9')
	{
		nb += (*str - '0') * ft_recursive_power(10, power - 1);
		power--;
		str++;
	}
	if (minus_bool == 0)
		return (nb);
	else
		return (-nb);
}
