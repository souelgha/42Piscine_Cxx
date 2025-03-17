/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:52:29 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/15 08:25:58 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n -1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
	char *s1 = "hello";
	char *s2 = "hellooo22";

	printf("result= %d. \n ", strncmp(s1, s2, 0));
	printf("42_result= %d. \n ", ft_strncmp(s1, s2, 0));

	return (0);

}*/
