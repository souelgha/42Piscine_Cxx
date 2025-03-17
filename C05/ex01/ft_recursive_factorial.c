/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:34:38 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/21 11:55:28 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int nb;

	(void)argc;
	nb =  atoi(argv[1]);
	printf("nb atoi = %d\n", nb);
    printf("factorielle = %d \n", ft_recursive_factorial(nb));
    return (0);
}*/
