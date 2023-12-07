/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:14:14 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:14:16 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* If c is an uppercase letter, tolower() returns its lowercase equivalent,
if  a lowercase  representation  exists in the current locale.  Otherwise,
it returns c.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
