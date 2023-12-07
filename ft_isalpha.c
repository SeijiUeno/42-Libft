/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:32:40 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/06 23:32:41 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks  for  an  alphabetic  character. The value of the argument must be
representable as an unsigned char or the value of EOF.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
