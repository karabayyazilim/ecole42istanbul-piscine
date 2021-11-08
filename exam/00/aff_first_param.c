/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:37:18 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 18:43:20 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int index = 0;
	if (ac > 1)
	{
		char *arr = av[1];
		while(arr[index])
			write(1, &arr[index++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
