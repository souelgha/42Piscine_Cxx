/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:04:12 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:07:20 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;
	int	i;

	if (str[0] == 0)
		result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
        char    str1[] = "Merci";
        char    str2[] = "12joy";
        char    str3[] = "";
	char	str4[] = "merci";

        printf("result str1 = %d \n", ft_str_is_lowercase(str1));
        printf("result str2 = %d \n", ft_str_is_lowercase(str2));
        printf("result str3 = %d \n", ft_str_is_lowercase(str3));
	printf("result str4 = %d \n", ft_str_is_lowercase(str4));

        return (0);
}*/
