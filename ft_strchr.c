/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:01:10 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/16 18:36:04 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ret;

	ret = (char *)s;
	i = 0;
	while (ret[i])
	{
		if (ret[i] == (unsigned char)c)
			return (&ret[i]);
		i++;
	}
	if (ret[i] == (unsigned char)c)
		return (&ret[i]);
	return (0);
}

// int	main(void)
// {
// 	const char	s[] = "Lets fire up the party";
// 	int	c = 'f';

// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s\n", strchr(s, c));
// 	return (0);
// }
// para el \0   linea 28