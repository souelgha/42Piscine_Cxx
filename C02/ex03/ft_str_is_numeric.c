/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:16:37 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:04:26 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	result;
	int	i;

	if (str[0] == 0)
		result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = 1;
		}
		else
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
/*
#include<stdio.h>
int	main()
{
	char	str1[] = "12345678";
	char	str2[] = "12joy";
	char	str3[] = "";

	printf("result str1 = %d \n", ft_str_is_numeric(str1));
	printf("result str2 = %d \n", ft_str_is_numeric(str2));
	printf("result str3 = %d \n", ft_str_is_numeric(str3));

	return (0);
}*/
