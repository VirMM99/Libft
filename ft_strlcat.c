/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:08:59 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 13:43:43 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief kgjghhg
/// @param dst iygjufjf
/// @param src uiuyfuft
/// @param size 
/// @return 
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	strlend;
	size_t	strlens;

	i = 0;
	j = ft_strlen(dst);
	strlens = ft_strlen(src);
	strlend = j;
	if (size <= j)
		return (size + strlens);
	while (src[i] && i < size - strlend - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (strlens + strlend);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char dst[] = "pqrstuvwxyz";
// 	const char src[] = "abcd";
// 	size_t size = 12;

// 	// printf("Mine %zu\n", ft_strlcat(dst, src, size));
// 	printf("Orig %zu", strlcat(dst, src, size));
// 	return (0);
// }

// compile like this: cc ft_strlcat.c -lbsd