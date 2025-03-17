/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:00:45 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 10:56:38 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<string.h>
#include<stdio.h>
int     main()
{
        char	src1[] = "Hello Word"; //10
	char	src2[] = "salut a tous"; //12
	char	src3[] = "coucou c est moi"; //16
	char dest[50];

	printf("la scr est = %s \n", src1);
        printf("src > n strncpy = %s \n", strncpy(dest, src1, 4));
        printf("src > n  42_strncpy = %s \n", ft_strncpy(dest, src1, 4));

	printf("la scr est = %s \n", src2);
        printf("src < n strncpy = %s \n", strncpy(dest, src2, 14));
        printf("src < n 42 strncpy = %s \n", ft_strncpy(dest, src2,14));

	printf("la scr est = %s \n", src3);
        printf("src=n strncpy = %s \n", strncpy(dest, src3, 16));
        printf("src=n 42_strncpy = %s \n", ft_strncpy(dest, src3, 16));

        return (0);
}*/
