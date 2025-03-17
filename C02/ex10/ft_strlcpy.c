/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:57:34 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/08 11:30:03 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;	

	i = 0;
	length = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	length = ft_strlen(src);
	return (length);
}
/*#include<stdio.h>
#include<bsd/string.h>

int	main()
{
	char	src[]= "Hello World";
	char	dest[100];

	printf("42_strlcpy = %d, dest= %s \n", ft_strlcpy(dest, src, 0), dest);
	printf("strlcpy = %ld, dest= %s \n", strlcpy(dest, src,0), dest);

	printf("42_strlcpy= %d, dest= %s \n", ft_strlcpy(dest, src, 20), dest);
        printf("strlcpy= %ld, dest= %s \n", strlcpy(dest, src, 20), dest);

	printf("42_strlcpy= %d, dest= %s \n", ft_strlcpy(dest, src, 10), dest);
        printf("strlcpy= %ld, dest= %s \n", strlcpy(dest, src, 10), dest);

	return (0);
}*/
