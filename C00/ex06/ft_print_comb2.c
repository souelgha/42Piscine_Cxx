/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:39:56 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/03 16:29:43 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_order_1(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!( (a == '9') && (b == '8') && (c == '9') && (d == '9') ) )
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	
	while( a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a ;
			while(c <= '9')
			{
				d = b;
				if(a == c)
				{
					d = d + 1;
				}
	
				while(d <= '9')
				{
		                    	ft_order_1(a, b, c, d);
                			d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int  main (void)
{
        ft_print_comb2();

        return (0);
}*/
