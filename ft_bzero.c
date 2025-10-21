/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:46:54 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/07 20:06:17 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ret[i] = '\0';
		i++;
	}
}

// int	 main(void)
// {
// 	unsigned char	s[] = "A ver que paza";
// 	size_t			n = 5;
//
// 	printf ("%s\n", s);
// 	//ft_bzero(s + 3, n);
// 	bzero(s, n);
// 	printf ("%s\n", s);	
// 	return (0);
// }
