/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:39:04 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 19:33:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_conditions(int i, int j, char *str)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if ((! (str[j] >= 'a' && str[j] <= 'z'))
			&& (! (str[j] >= 'A' && str[j] <= 'Z'))
			&& (! (str[j] >= '0' && str[j] <= '9')))
				str[i] = str[i] - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}	
	i = 1;
	while (str[i] != '\0')
	{
		j = i - 1;
		str = ft_conditions(i, j, str);
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main()
{
	char	str1[] = "salut, comment tu vas ? 42mots nte+et+un";
	char    str2[] = "  helLLDLDLDLD ? 4422nte-deux; cinquante+et+un";
	char    str3[] = "  SALUTTt, comMent tu vas ? 42me-deux; cinquante+et+un";

	printf(" str1 = %s \n", ft_strcapitalize(str1));
	printf(" str2 = %s \n", ft_strcapitalize(str2));
	printf(" str3 = %s \n", ft_strcapitalize(str3));

	return (0);
}*/
