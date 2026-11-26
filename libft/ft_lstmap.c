/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:16:03 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/16 09:26:15 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*const_newlst;
	t_list	*tmp;
	t_list	*lst_tmp;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	newlst = 0;
	const_newlst = newlst;
	lst_tmp = lst;
	while (lst_tmp != 0)
	{
		tmp = ft_lstnew(f(lst_tmp->content));
		if (tmp == 0)
		{
			ft_lstclear(&const_newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, tmp);
		lst_tmp = lst_tmp->next;
	}
	return (const_newlst);
}
