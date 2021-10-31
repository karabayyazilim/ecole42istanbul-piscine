/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:38:30 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/31 11:30:40 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	destlen;

	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	index = 0;
	while (index < nb && src[index] != '\0')
	{
		dest[destlen + index] = src[index];
		index++;
	}
	dest[destlen + index] = '\0';
	return (dest);
}
