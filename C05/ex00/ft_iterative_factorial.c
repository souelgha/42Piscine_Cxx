/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:55:57 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/21 11:53:26 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	i = nb - 1;
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int	nb;
	
	(void)argc;
	nb = 0;
	nb = atoi(argv[1]);
	printf("nb atoi = %d\n", nb);
	printf("factorielle = %d \n", ft_iterative_factorial(nb));
	return (0);
	
}*/
