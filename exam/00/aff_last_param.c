/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:49:06 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 19:00:06 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int index = 0;

	if (ac > 1)
	{
		while (av[ac - 1][index])
			write(1, &av[ac - 1][index++], 1);
	}
}
