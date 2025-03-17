/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:28:44 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/15 10:13:26 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	odd;
	int	nb;

	i = 0;
	odd = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			odd ++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	if (odd % 2 != 0)
		nb = -nb;
	return (nb);
}
/*
#include<stdio.h>
int main()
{
//	char str[] = "    ----++--123ab567";
	char str[] = " ++---5478ad25";
	int	nbr2;
	
	nbr2 = 0;
	nbr2 = ft_atoi(str);
	printf("42_nbr2 = %d\n ", nbr2);
	return (0);

}*/
