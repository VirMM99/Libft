/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:56:26 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/15 13:20:59 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len_s;

	len_s = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * (len_s + 1));
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s, len_s + 1);
	return (s2);
}

// int	main(void)
// {
// 	char *paco = ft_strdup("Hello my dude");
// 	char *paco2 = strdup("Hello my dude");
// 	printf ("%s\n", paco);
// 	printf ("%s\n", paco2);
// 	free(paco);
// 	free(paco2);
// 	return (0);
// }