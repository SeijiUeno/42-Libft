/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:15:14 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:15:16 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcat() function concatenate strings. The strlcat() function appends the
 NUL-terminated string src to the end of dst.  It will append at most
 size - strlen(dst) - 1 bytes, NUL-terminating the result.
 Return the initial length of original dst plus the length of original src.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (n <= i)
		return (n + ft_strlen(src));
	ft_strlcpy(dst + i, src, n - i);
	return (i + ft_strlen(src));
}
