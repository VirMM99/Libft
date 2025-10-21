/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:59:22 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/16 17:29:27 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		save;
	char	*ret;

	ret = (char *)s;
	i = 0;
	save = 0;
	while (ret[i])
	{
		if (ret[i] == (unsigned char)c)
			save = i;
		i++;
	}
	if ((unsigned char)c == 0)
		return (&ret[i]);
	if (save == 0 && ret[save] != (unsigned char)c)
		return (NULL);
	return (&ret[save]);
}

// int	main(void)
// {
// 	const char	s[] = "Lets fire up the party";
// 	int	c = 'f';

// 	printf("%s\n", ft_strrchr(s, c));
// 	printf("%s\n", strrchr(s, c));
// 	return(0);
// }