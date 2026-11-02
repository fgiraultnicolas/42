/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:48:19 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/01 19:00:31 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	strlen_split(char *str, char *charset, int count)
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

char	*copy_word(char *str, char *charset, int len, int i)
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

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	char	**const_split;

	if (str == 0 || charset == 0)
		return (0);
	split_str = malloc(sizeof(char *) * (strlen_split(str, charset, 0) + 1));
	if (split_str == 0)
		return (0);
	const_split = split_str;
	while (*str != '\0')
	{
		while (*str != '\0' && is_sep(*str, charset) == 1)
			str++;
		if (*str != '\0')
		{
			*split_str = copy_word(str, charset, 0, 0);
			split_str++;
		}
		while (*str != '\0' && is_sep(*str, charset) == 0)
			str++;
	}
	*split_str = 0;
	return (const_split);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Bijour, test1,test2 test3 -test4,";
	char	*charset = ", -";
	char **output;
	int	i;

	output = ft_split(str, charset);
	i = 0;
	while (i <= strlen_split(str, charset, 0))
	{
		printf("%s\n", output[i]);
		i++;
	}
	return (0);
}*/
