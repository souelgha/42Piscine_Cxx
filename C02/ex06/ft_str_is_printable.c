/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:02:06 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:13:21 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;
	int	i;

	if (str[0] == 0)
		result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
int     main()
{
        char    str1[] = "";
        char    str2[] = "12joy";
        char    str3[] = "MERCI";
	char    str4[] = "\n" ;


        printf("result str1 = %d \n", ft_str_is_printable(str1));
        printf("result str2 = %d \n", ft_str_is_printable(str2));
        printf("result str3 = %d \n", ft_str_is_printable(str3));
        printf("result str4 = %d \n", ft_str_is_printable(str4));

        return (0);
}*/
