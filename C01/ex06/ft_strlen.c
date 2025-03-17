/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:19:03 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/06 09:01:16 by sonouelg         ###   ########.fr       */
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
//#include<stdio.h>
/*int main()
{
	char	str[] = "Hello World and Welcome!";
	int	count;

	count = 0;
	count = ft_strlen(str);
	printf(" le nombre de caracteres trouve est :%d \n", count);

	return	(0);
}*/
