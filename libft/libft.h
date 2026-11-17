/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:52:22 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/17 06:03:38 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// libs

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

// structs

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// proto

size_t			ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
unsigned int	ft_lstsize(t_list *lst);
void			ft_putchar_fd(char c, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstadd_back(t_list **lst, t_list *new);

#endif
