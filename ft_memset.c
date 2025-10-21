/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:08:45 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/09 15:34:08 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_s;

	cast_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cast_s[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {

// 	// char	s[] = "viva la vida";
// 	int array[] = {100000, 1, 20, 42}; 
// 	int		c = 0;
// 	size_t n = 3;
// 	int *devuelto;

// 	printf("primer valor de arrray antes: %d\n", array[0]);
// 	devuelto = ft_memset(array, c, n);
// 	printf("primer valor de arrray despues: %d\n", devuelto[0]);

// 	return (0);
// }
// Main that returns an int from an array

// int	main(void)
// {
// 	unsigned char	s[] = "Y pones lo que quieras";
// 	int	c = '1';
// 	size_t n = 7;

// 	printf ("%s\n", (unsigned char *)ft_memset(s, c, n));
// 	printf ("%s", (unsigned char *)memset(s, c, n));
// 	return (0);
// }
// Main that returns string

// int	main(void)
// {
// 	char	s[] = "Y pones lo que quieras";
// 	int	c = '1';
// 	size_t n = 42;

// 	printf ("%p\n", (char *)ft_memset(s, c, n));
// 	printf ("%p", (char *)memset(s, c, n));
// 	return (0);
// }
// Main that returns the pointer