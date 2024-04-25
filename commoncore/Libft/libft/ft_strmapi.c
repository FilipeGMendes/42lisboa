/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipemendes <filipemendes@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:06:15 by filipemende       #+#    #+#             */
/*   Updated: 2024/04/25 19:56:48 by filipemende      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *res;
    
    /* allocating the memory for the new string */
    res = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!res)
        return (NULL);
    i = 0;
    /* looping over the whole string s */
    while (i < ft_strlen(s))
    {
        /* applying the function f to each character of s
         * and storing the result in the new string res
         */
        res[i] = (*f)(i, s[i]);
        i++;
    }
    /* setting the NUL-terminating character */
    res[i] = 0;
    /* finally, we return res */
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
