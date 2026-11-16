/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:53:08 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/16 08:02:49 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while(lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
