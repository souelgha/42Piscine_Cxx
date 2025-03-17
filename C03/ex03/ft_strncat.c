/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:50:07 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/09 17:59:36 by sonouelg         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
	(void)argc;
	char	*dest = argv[1];
	char	*src = argv[2];

//	printf("42_strncat = %s \n", ft_strncat(dest, src, 5)); 
	printf("strncat = %s \n", strncat(dest, src, 5));
	return (0);
}*/
