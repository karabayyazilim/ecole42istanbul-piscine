/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:48:33 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/23 16:11:51 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int horizantel, int vertical)
{
	int	x;
	int	y;

	y = 0;
	while (y++ < vertical)
	{
		x = 0;
		while (x++ < horizantel)
		{
			if (y == 1 && (x == 1 || x == horizantel))
				ft_putchar('A');
			else if (y == vertical && (x == 1 || x == horizantel))
				ft_putchar('C');
			else if ((x == 1 || x == horizantel) || (y == 1 || y == vertical))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(void)
{
	rush(5, 3);
}
