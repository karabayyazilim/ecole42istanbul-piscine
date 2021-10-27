/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:02:36 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/27 14:24:30 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	while (i < size)
	{
		while (a < size)
		{
			if (tab[i] > tab[a])
			{
				b = tab[i];
				tab[i] = tab[a];
				tab[a] = b;
			}
			a++;
		}
		i++;
		a = i + 1;
	}
}
