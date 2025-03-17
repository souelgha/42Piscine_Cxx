/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:55:09 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/09 08:56:38 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
	char	s1[] = "coucou";
	char	s2[] = "couNou";

	printf("resultcmp = %d \n", strcmp(s1, s2));
	printf("42_resultcmp = %d \n", ft_strcmp(s1, s2));

	return (0);
}*/
