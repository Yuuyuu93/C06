/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:45:43 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/28 17:58:24 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;

	a = 0;
	while (argv[0][a] != '\0' && argc)
	{
		ft_putchar(argv[0][a]);
		a++;
	}
	ft_putchar('\n');
	return (0);
}
