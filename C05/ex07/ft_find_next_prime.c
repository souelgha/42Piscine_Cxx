/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:51:18 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/21 12:03:00 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	i = 3;
	while (i < nb && i <= 46341)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb + i) != 1)
		i++;
	return (nb + i);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("next prime = %d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}*/
