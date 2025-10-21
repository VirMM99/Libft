/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:41:23 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 12:39:59 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ret[i] == (unsigned char)c)
			return (&ret[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	s[] = "Lets fire up the party";
// 	int	c = 'f';
// 	size_t n = 8;

// 	printf("%s\n", (unsigned char *)ft_memchr(s, c, n));
// 	printf("%s", (unsigned char *)memchr(s, c, n));
// 	return(0);
// }