/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:08:39 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/10 12:44:49 by sonouelg         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0' && j < ft_strlen(to_find))
	{
		if (str[i] == to_find[0])
		{
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
			{
				j++;
			}
		k = i;
		}
		i++;
	}
	if (j == ft_strlen(to_find))
		return (str + k);
	else
		return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
    (void)argc;
    char    *dest = argv[1];
    char    *src = argv[2];
//	char    *src = "";

  printf("42_strstr = %s \n", ft_strstr(dest, src)); 
//    printf("strncat = %s \n", strncat(dest, src, 5));
    return (0);
}*/
