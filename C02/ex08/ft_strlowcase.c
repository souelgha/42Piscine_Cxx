/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:52:39 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:18:42 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int     main()
{
        char    str1[] = "London And Paris";
        char    str2[] = "ParIS 12";
        char    str3[] = "PARIS  & NEW YORK";

        printf("str1 = %s \n", ft_strlowcase(str1));
        printf("str2 = %s \n", ft_strlowcase(str2));
        printf("str3 = %s \n", ft_strlowcase(str3));
	return (0);
}*/
