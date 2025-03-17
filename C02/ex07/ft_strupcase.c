/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:16:45 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:16:07 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int	main()
{
	char	str1[] = "Paris";
	char	str2[] = "paris 12";
	char	str3[] = "PARIS 10";

	printf("str1 = %s \n", ft_strupcase(str1));
	printf("str2 = %s \n", ft_strupcase(str2));
	printf("str3 = %s \n", ft_strupcase(str3));
}*/
