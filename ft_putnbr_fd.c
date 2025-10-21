/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:01:03 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/13 21:02:46 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	v;
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(fd, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
	}
	v = (nb % 10) + '0';
	write(fd, &v, sizeof(v));
}

// int	main(void)
// {
// 	ft_putnbr_fd(2147483647, 1);
// 	return (0);
// }