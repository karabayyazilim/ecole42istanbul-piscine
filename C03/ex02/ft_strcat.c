/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:34:00 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/31 11:26:38 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	destlen;

	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	index = 0;
	while (src[index] != '\0')
	{
		dest[destlen + index] = src[index];
		index++;
	}
	dest[destlen + index] = '\0';
	return (dest);
}
