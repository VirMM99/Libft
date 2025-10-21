/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:59:16 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 12:25:54 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  memmove() function copies n bytes from
memory area src to memory area dest.
The memory areas may overlap: copying takes place as though
the bytes in  src  are  first  copied
into  a  temporary  array that does not overlap src or dest,
and the bytes are then copied
from the temporary array to dest. */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	unsigned char		*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!cdest && !csrc)
		return (NULL);
	if (cdest == csrc)
		return (cdest);
	if (cdest > csrc)
	{
		while (n > 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
		return (cdest);
	}
	else
	{
		cdest = (unsigned char *)ft_memcpy(dest, src, n);
		return (cdest);
	}
}

// int	main(void)
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char *dest = src + 1;

// 	char	src1[] = "lorem ipsum dolor sit amet";
// 	char *deest2 = src1 + 1;
// 	size_t			n = 5;

// 	printf("%s\n", (char *)ft_memmove(dest, "consectetur", n));
// 	printf("%s", (char *)memmove(deest2, "consectetur", n));
// 	return (0);
// }
