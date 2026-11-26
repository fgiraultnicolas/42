/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 07:08:44 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/14 07:35:23 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	strtrim_len(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_set(s1[i], set) == 1)
		i++;
	if (i != ft_strlen(s1))
	{
		while (is_set(s1[j], set) == 1 && j > 0)
		{
			i++;
			j--;
		}
	}
	return (ft_strlen(s1) - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new_str;
	char	*const_new_str;
	size_t	trim_len;

	i = 0;
	trim_len = strtrim_len(s1, set);
	new_str = malloc(sizeof(char) * (trim_len + 1));
	if (new_str == 0)
		return (0);
	const_new_str = new_str;
	while (is_set(*s1, set) == 1)
		s1++;
	while (i < trim_len)
	{
		*new_str = *s1;
		s1++;
		i++;
		new_str++;
	}
	*new_str = '\0';
	return (const_new_str);
}
