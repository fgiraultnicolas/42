/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:51:13 by fgirault          #+#    #+#             */
/*   Updated: 2026/11/09 11:12:14 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	trimlen(char const *s1, char const *set)
	{                                            
  size_t	i;                               
  size_t	j;                               
  size_t	count;                           
                                             
  i = 0;                                     
  const_s2 = s2;                             
  while (s1[i] != '\0')                      
  {                                          
	j = 0;                                   
	while (s1[i] != set[j] && set[j] != '\0')
		j++;                                 
	if (set[j] == s1[i])                     
		count++;                             
	i++;                                     
  }                                          
  return (count)
}

char	*ft_strtrim(char const *s1, char const *set)
{
  size_t	i;
  size_t	j;
  char	*s2;
  char	*const_s2;

  i = 0;
  const_s2 = s2;
  s2 = malloc(sizeof(char) * (ft_strlen(s1) - trimlen(s1, set) + 1));
while (s1[i] != '\0')
{                    
  j = 0;                                   
  while (s1[i] != set[j] && set[j] != '\0')
  	j++;                                 
  if (set[j] != s1[i])                     
  {
  	*s2 = s1[i];                             
	s2++;
  }
  i++;                                     
}                                          
	*s2 = '\0';
  return (const_s2);
}
