/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:41:18 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/10 16:03:08 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	char *str = argv[1];

	printf("nb caracteres = %d \n ", ft_strlen(str) );
	return (0);
}*/
