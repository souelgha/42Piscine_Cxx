/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:08:35 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/09 15:51:55 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>

int	main(int argc, char **argv)
{
	(void)argc;

	char *dest = argv[1];
	char *src = argv[2];
	int length;
		
        length = ft_strlen(dest);
//        printf("lenght = %d. \n", length);
	printf("42_strcat = %s \n", ft_strcat(dest,src));

	return (0);
}*/	
