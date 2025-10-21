/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:34:18 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/16 18:37:21 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	k;

	i = 0;
	k = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[k]))
		k--;
	return (ft_substr(s1, i, (k - i) + 1));
}
// int	main(void)
// {
// 	printf("%s\n", ft_strtrim(".......hola.que.tal.estas?......", ".hola"));
// 	return (0);
// }
