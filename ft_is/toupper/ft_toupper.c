/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:14:07 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:14:10 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If  c  is a lowercase letter, toupper() returns its uppercase equivalent,
if an uppercase representation exists in the current locale.  Otherwise,  
it  returns c. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
