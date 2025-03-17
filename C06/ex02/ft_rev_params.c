/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:17:50 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/14 09:27:49 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_pustr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*dest;

	(void)argc;
	i = 0;
	while (argv[i] != 0)
	{
		i++;
	}
	i = i - 1;
	while (i > 0)
	{
		dest = argv[i];
		ft_pustr(dest);
		i--;
	}
	return (0);
}
