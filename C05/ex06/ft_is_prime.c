/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:06:17 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/21 11:03:58 by sonouelg         ###   ########.fr       */
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
/*
//#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int prime;

	(void)argc;
	prime = atoi(argv[1]);
	printf("result  = %d \n", ft_is_prime(prime));
	return (0);
}*/
