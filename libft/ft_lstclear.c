/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:43:58 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/16 09:12:47 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst;
	*lst = 0;
	while (tmp1 != 0)
	{
		tmp2 = tmp1->next;
		del(tmp1->content);
		free(tmp1);
		tmp1 = tmp2;
	}
}
