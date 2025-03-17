/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 08:32:19 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/06 08:36:56 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	valmin;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				valmin = tab[j];
				tab[j] = tab[i];
				tab[i] = valmin;
			}
			j++;
		}
		i++;
	}
}
/*#include<stdio.h>
int	 main()
{
	int     tab[] = {80, 70, 2, 1, 78};
        int     i;

        i = 0;
	ft_sort_int_tab(tab, 5);
        for(i = 0; i < 5; i++)
                printf(" %d ", tab[i]);
}*/
