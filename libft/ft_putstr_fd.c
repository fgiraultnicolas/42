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

void	ft_putstr(char *str);
int		ft_strlen(char *str);

/*int	main(void)
{
	char	str[] = "Hello";

	ft_putstr(str);
	return (0);
}*/

void	ft_putstr(char *str)
{
	int	n;

	n = ft_strlen(str);
	write(1, str, n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
