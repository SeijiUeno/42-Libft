/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:15:02 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:15:05 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strlen() function calculates the length of the string pointed to by s,
 excluding the terminating null byte ('\0').
The strlen() function returns the number of bytes in the string pointed
 to by s.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
