/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:47:47 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/16 18:39:30 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	s1 = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	return (s1);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("hello", &f));
// 	return (0);
// }

// char	f(unsigned int yes, char no)
// {
// 	yes++;
// 	return(no);
// }