/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault@fgirault@student.42.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 19:57:45 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/11 20:01:17 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(size_t n, void *s, int c)
{
	size_t	i;
	unsigned char	*edit_s;

	i = 0;
	edit_s = s;
	while (i < n)
	{
		edit_s[i] = c;
		i++;
	}
	return (s);
}
