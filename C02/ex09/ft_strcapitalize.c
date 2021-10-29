/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:42:15 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 13:01:21 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (stc[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if (str[c] < '0' || (str[c] > '9' && str[c] < 'A') \
				|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > '>'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
