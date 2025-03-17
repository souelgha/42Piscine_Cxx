/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:32:57 by sonouelg          #+#    #+#             */
/*   Updated: 2023/08/10 19:01:33 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
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
	char	*dest;
	int		i;

	(void)argc;
	i = 1;
	while (argv[i] != 0)
	{
		dest = argv[i];
		ft_putstr(dest);
		i++;
	}
	return (0);
}	
