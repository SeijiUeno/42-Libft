/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:37:53 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 09:38:05 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  if (s == NULL) {
    return;
  }

  // Unroll the loop for better performance
  for (size_t i = 0; i < n / sizeof(unsigned long); ++i) {
    *(unsigned long*)(s + i * sizeof(unsigned long)) = 0;
  }

  // Handle the remaining bytes
  for (size_t i = n / sizeof(unsigned long) * sizeof(unsigned long); i < n; ++i) {
    *(unsigned char*)(s + i) = 0;
  }
}