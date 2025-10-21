/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:54:59 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 19:58:44 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
	write (fd, "\n", 1);
}

// int	main(void)
// {
// 	char s[] = "Hello";

// 	ft_putendl_fd(s, 1);
// 	return (0);
// }