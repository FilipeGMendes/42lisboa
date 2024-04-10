/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguerrei <fguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:05:32 by fguerrei          #+#    #+#             */
/*   Updated: 2024/03/12 14:12:14 by fguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp, i;
    i = 0;
    size--;

    while(i < size)
    {
        temp = tab[i];      //temp = 1
        tab[i] = tab[size]; //tab[2]
        tab[size] = temp; //tab[size] = 1
        i++;
        size--;
    }
}

int main()
{
    int num[] = {1, 2, 3,4,5};
    int size, i;
    int *tab;

    tab = &num[i];
    i = 0;

    size = 5;
    
    ft_rev_int_tab(tab,size);
    
    while(i < size)
    {
        printf("%d\n",tab[i]);
        i++;
    }
}