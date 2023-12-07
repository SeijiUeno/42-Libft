/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:55:42 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 09:59:32 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <errno.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size) {
    void *alloc_mem;
    size_t total_size;

    if (nmemb == 0 || size == 0) {
        return malloc(0);
    }

    // Check for overflow
    if (SIZE_MAX / size < nmemb) {
        errno = ENOMEM;
        return NULL;
    }

    total_size = nmemb * size;

    // Allocate memory
    alloc_mem = malloc(total_size);
    if (!alloc_mem) {
        errno = ENOMEM;
        return NULL;
    }

    // Explicitly zero the memory
#if defined(__GNUC__) || defined(__clang__)
    __builtin_memset(alloc_mem, 0, total_size);
#else
    ft_bzero(alloc_mem, total_size);
#endif

    return alloc_mem;
}