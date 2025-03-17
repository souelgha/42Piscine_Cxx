/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:22:51 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/04 10:35:54 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf(" valeur de div = %d \n" " valeur de mod = %d \n", div, mod);
}*/
