/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:28:27 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/16 17:25:54 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (!big && len <= 0)
		return (NULL);
	l_len = ft_strlen(little);
	while (big[i] && (i + l_len <= len))
	{
		if (ft_strncmp(&big[i], little, l_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	big[] = "NULL";
// 	char	little[] = "gg";

// 	printf ("%s\n", ft_strnstr(big, little, 0));
// 	printf ("%s", strnstr(big, little, 0));
// 	return (0);
// }
