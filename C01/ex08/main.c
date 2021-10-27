/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:24:43 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/27 14:28:06 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {3,1,4,2};
	int size = 4;
	ft_sort_int_tab(tab, size);
	printf("%d", tab[0]);
}
