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

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	newlst = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (newlst == 0)
		return (0);
	const_newlst = newlst;
	while (lst != 0)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == 0)
		{
			ft_lstclear(&const_newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (const_newlst);
}
