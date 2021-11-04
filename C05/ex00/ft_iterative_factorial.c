/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:34:02 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/03 14:25:27 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	index = 1;
	while (index < nb + 1)
		factorial *= index++;
	return (factorial);
}
