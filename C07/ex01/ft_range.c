/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <akarabay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:00:34 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/12 11:46:35 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*arr;

	if (min >= max)
		return (0);
	range = max - min;
	arr = malloc(range * sizeof(int));
	if (!arr)
		return (0);
	index = 0;
	while (index < range)
	{
		arr[index] = min + index;
		index++;
	}
	return (arr);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/