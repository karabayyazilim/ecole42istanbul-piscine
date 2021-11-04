/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:54:53 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/03 21:03:52 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int		sqrt;
	unsigned int		index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= (unsigned int) nb)
		index++;
	index -= 1;
	if (index * index == (unsigned int)nb)
		return (index);
	return (0);
}
