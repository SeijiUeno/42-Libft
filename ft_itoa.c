/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:17:22 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:17:25 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		nbr = nbr * -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_len(nbr);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	i = len;
	if (n < 0)
		nbr = -nbr;
	while (nbr >= 0 && i > 0)
	{
		i--;
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
