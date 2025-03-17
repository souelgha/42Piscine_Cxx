/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:04:25 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:00:30 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	i = 0;
	if (str[0] == 0)
		result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
int	 main()
{
	char	str1[] = "Mondoooooooe";
	char	str2[] = "Salut 0001 !";
	char	str3[] = "";
	printf("result str1 = %d \n",ft_str_is_alpha(str1));
        printf("result str2 = %d \n",ft_str_is_alpha(str2));
	printf("result str3 = %d \n",ft_str_is_alpha(str3));
	
	return(0);
}*/
