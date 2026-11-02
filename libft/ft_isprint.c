/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 07:08:44 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/14 09:52:41 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

/*int	main(void)
{
	char	str[] = "1T2e3s4t*";

	if (ft_str_is_printable(str) == 1)
		printf("1");
	else
		printf("0");
	return (0);
}*/

int	ft_str_is_printable(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (*str >= ' ' && *str <= '~')
				str++;
			else
				return (0);
		}
	}
	return (1);
}
