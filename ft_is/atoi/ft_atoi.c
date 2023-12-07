/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:28:45 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 14:00:02 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\f') || (c == '\n') || (c == '\r') || (c == '\v')
		|| (c == '\t'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sign;
	long long int result;

	i = 0;
	num = 0;
	sign = 1;
	result = 0;

	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		result = result * 10 + (nptr[i] - '0');
		// Check for overflow
		if (result * sign > INT_MAX || result * sign < INT_MIN)
			return (0); // Handle overflow
		i++;
	}
	return (result * sign);
}

