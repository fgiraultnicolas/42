/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:52:22 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/03 09:54:01 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

// libs

	#include <stdlib.h>
	#include <unistd.h>
	#include <stddef.h>

// structs              
                        
typedef struct s_list   
{                       
	void *content;      
	struct s_list *next;
}	t_list;             

// proto

	size_t	ft_strlen(char *str);
	char	*ft_strcpy(char *dest, char *src) ;
	unsigned int	ft_lstsize(t_list *lst);

#endif
