/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:45:48 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/28 14:25:55 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	m;
	int	a;

	a = 1;
	while (a < argc)
	{
		m = 0;
		while (argv[a][m] != '\0')
		{
			ft_putchar(argv[a][m]);
			m++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
