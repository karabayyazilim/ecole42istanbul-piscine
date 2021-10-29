/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:27:46 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 13:46:24 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int length;

	length = 0;
	i = 0;
	while (src[i] && i < size--)
	{
		dest[i] = src[i];
		i++;
	}

	while(src[length])
		length++;
	return (length);
}
