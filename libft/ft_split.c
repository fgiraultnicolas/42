/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:48:19 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/26 16:29:36 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

static int	strlen_split(char const *str, char charset, int count)
{
	while (*str != '\0')
	{
		while (*str != '\0' && is_sep(*str, charset) == 1)
			str++;
		if (*str != '\0')
			count++;
		while (*str != '\0' && is_sep(*str, charset) == 0)
			str++;
	}
	return (count);
}

static char	*copy_word(char const *str, char charset, int len, int i)
{
	char	*word;

	while (str[len] != '\0' && is_sep(str[len], charset) == 0)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (word == 0)
		return (0);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**helper(char const *s, char c, char **split_str, char **cs)
{
	while (*s != '\0')
	{
		while (*s != '\0' && is_sep(*s, c) == 1)
			s++;
		if (*s != '\0')
		{
			*split_str = copy_word(s, c, 0, 0);
			if (split_str == 0)
			{
				while (split_str >= cs)
				{
					free(split_str);
					split_str--;
				}
				return (0);
			}
			split_str++;
		}
		while (*s != '\0' && is_sep(*s, c) == 0)
			s++;
	}
	*split_str = 0;
	return (cs);
}

char	**ft_split(char const *s, char c)
{
	char	**split_str;
	char	**const_split;

	if (s == 0)
		return (0);
	split_str = malloc(sizeof(char *) * (strlen_split(s, c, 0) + 1));
	if (split_str == 0)
		return (0);
	const_split = split_str;
	return (helper(s, c, split_str, const_split));
}
