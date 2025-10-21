/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:16:55 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 19:51:39 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
}
// int	main(void)
// {
// 	char s[] = "Hello";

// 	ft_putstr_fd(s, 1);
// 	return (0);
// }