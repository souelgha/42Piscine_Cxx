/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:54:57 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/20 12:12:36 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	i = 1;
	n = nb;
	while (i < power)
	{
		nb = n * nb;
		i++;
	}
	return (nb);
}
/*
#include<stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	nb;
	int	power;


	(void)argc;
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("nb result = %d \n", ft_iterative_power(nb, power));
}*/
