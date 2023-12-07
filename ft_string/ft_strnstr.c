/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:14:41 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:14:45 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*locate a substring in a string.
 The strnstr() function locates the first occurrence of the null-terminated
 string little in the string big, where not more than len characters are
searched. Characters that appear after a ‘\0’ character are not searched. 
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(big) < ft_strlen(little))
		return (0);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len) && big[i + j])
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
