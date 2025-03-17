/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:25:10 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/21 11:38:41 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		n = nb * ft_recursive_power(nb, power - 1);
	return (n);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int nb;
    int power;


    (void)argc;
    nb = atoi(argv[1]);
    power = atoi(argv[2]);
    printf("nb result = %d \n", ft_recursive_power(nb, power));
}*/
