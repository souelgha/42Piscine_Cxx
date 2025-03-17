/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:12:34 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/20 15:50:28 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= 46340)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main(int argc, char **argv)
{
	int	nb;

	(void)argc;
	nb = atoi(argv[1]);
	printf("racine carre = %d \n", ft_sqrt(nb));
	return (0);
}*/
