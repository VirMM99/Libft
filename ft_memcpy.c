/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:57:18 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 12:25:37 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
       The memcpy() function copies n bytes
	   from memory area src to memory area dest.  
	   The memory areas must not overlap.  
	   Use memmove(3) if the memory areas do overlap. */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	i = 0;
	if (!cdest && !csrc)
		return (NULL);
	if (cdest == csrc)
		return (cdest);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

// int	main(void)
// {
// 	unsigned char		src[] = "";
// 	unsigned char	dest[] = "";
// 	size_t			n = 6;

// 	printf("%s\n", (unsigned char *)ft_memcpy(dest, src, n));
// 	printf("%s", (unsigned char *)memcpy(dest, src, n));
// 	return (0);
// }
