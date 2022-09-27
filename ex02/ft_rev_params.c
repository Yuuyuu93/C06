/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:45:51 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/27 22:50:13 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	r;
	int	p;

	r = argc - 1;
	while (r > 0)
	{
		p = 0;
		while (argv[r][p] != '\0' && argc)
		{
			ft_putchar(argv[r][p]);
			p++;
		}
		ft_putchar('\n')
		r--;
	}
	return (0);
}
