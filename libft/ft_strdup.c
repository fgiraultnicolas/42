/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:38:15 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/24 15:45:11 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(char) * ft_strlen(src));
	return (ft_strcpy(dup, src));
}

/*int	main(void)
{
	printf("%s\n", ft_strdup("test"));
	return (0);
}*/
