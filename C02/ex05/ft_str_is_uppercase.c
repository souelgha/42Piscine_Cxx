/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:40:33 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:10:13 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	if (str[0] == 0)
		result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
/*#include<stdio.h>
int     main()
{
        char    str1[] = "Merci";
        char    str2[] = "12joy";
        char    str3[] = "";
        char    str4[] = "MERCI";

        printf("result str1 = %d \n", ft_str_is_uppercase(str1));
        printf("result str2 = %d \n", ft_str_is_uppercase(str2));
        printf("result str3 = %d \n", ft_str_is_uppercase(str3));
        printf("result str4 = %d \n", ft_str_is_uppercase(str4));

        return (0);
}*/
