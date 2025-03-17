/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:36:38 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/15 12:31:09 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int			i;
	char		tab[20];
	long int	n;

	i = 0;
	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n > 9)
	{		
		tab[i++] = n % 10 + '0';
		n = n / 10;
	}
	tab[i] = n % 10 + '0';
	while (i >= 0)
	{
		ft_putchar(tab[i--]);
	}
}
/*
int main()
{
	int	nb;

	nb = -2147483648;
//	nb = 2547892;
//	nb = -23358423;
	ft_putnbr(nb);

	return (0);
}*/
