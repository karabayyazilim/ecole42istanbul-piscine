/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:28:56 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/28 11:37:45 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 5, b = 15, div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("\nmaximum of %d and %d and %d and %d", a, b, div, mod);
}
