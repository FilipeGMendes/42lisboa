/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:06:15 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/29 10:16:01 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
  {
  char *str;
  size_t i;

  str = malloc((ft_strlen(s) + 1) * sizeof(char));
  if (!str)
  return (NULL);
  i = 0;
  while (i < ft_strlen(s))
  {
  str[i] = (*f)(i, s[i]);
  i++;
  }
  str[i] = 0;
  return (str);
  }*/
