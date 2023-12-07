/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:16:23 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:16:27 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memcmp()  function  compares  the first n bytes (each interpreted as 
unsigned char) of the memory areas s1 and s2.  The memcmp() function returns an
integer less than, equal to, or greater than zero if  the  first n bytes of s1
is found, respectively, to be less than, to match, or be greater than the
first n bytes of s2.
if n = 0 the return value is 0;
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n - 1 && ptr1[i] == ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
