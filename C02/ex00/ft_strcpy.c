/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:40:38 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 16:28:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
	char src[] = "Hello Word";
	char dest[50];
	
	printf("la scr est = %s \n", src);
	printf("dest de strcpy = %s \n",  strcpy(dest, src));
	printf("dest 42_strcpy = %s \n",ft_strcpy(dest, src));

	return (0);
}*/
