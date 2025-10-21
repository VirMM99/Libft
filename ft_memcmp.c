/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:05:49 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 12:30:41 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
		{
			return (cs1[i] - cs2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	s1[] = "Yes can";
// 	const char	s2[] = "Yes tan";
// 	size_t	n = 5;

// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	printf("%d", memcmp(s1, s2, n));
// 	return (0);
// }

/* DESCRIPTION
       The  memcmp()  function  compares the first n bytes
	   (each interpreted as unsigned char) of
       the memory areas s1 and s2.

RETURN VALUE
       The memcmp() function returns an integer less than,
	   equal to, or greater than zero if  the
       first  n bytes of s1 is found, respectively, to be less than,
	   to match, or be greater than
       the first n bytes of s2.

       For a nonzero return value, the sign is determined by the sign of the
	   difference  between
       the first pair of bytes (interpreted as unsigned char)
	   that differ in s1 and s2.
       If n is zero, the return value is zero.
 */