/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/05 16:32:07 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include<stdio.h>
int	 main()
{
	int	tab[5] = {31, 7, 100, 2, 78};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 5);
	for(i = 0; i < 5; i++)
		printf(" %d ", tab[i]);
}*/
