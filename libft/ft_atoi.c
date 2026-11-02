/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:20:49 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/01 20:08:49 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen_atoi(char *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13)
		|| *str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

int	ft_atoi(char *str)
{
	int	minus_count;
	int	nb;
	int	power;

	minus_count = 0;
	power = ft_strlen_atoi(str);
	nb = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13)
		|| *str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb += (*str - '0') * ft_recursive_power(10, power - 1);
		power--;
		str++;
	}
	if (minus_count % 2 == 0)
		return (nb);
	else
		return (-nb);
}

/*int	main(void)
{
	char	*str = " 	--+123a456";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
