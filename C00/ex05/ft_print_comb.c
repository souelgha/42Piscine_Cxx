/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:06:28 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/03 16:30:35 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_conditions(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '6')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_conditions(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	b = '8';
	c = '9';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
/*
int  main (void)
{
        ft_print_comb();

        return (0);
}*/
