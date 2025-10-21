/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:35:01 by vimirand          #+#    #+#             */
/*   Updated: 2025/10/10 21:20:35 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;

	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (j < (size - 1) && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char *dst = NULL;
// 	char src[12] = "Lorem ipsum";
// 	size_t size = 0;

// 	printf("Mine %zu\n", ft_strlcpy(dst, src, size));
// 	printf("Orig %zu", strlcpy(dst, src, size));
// 	return (0);
// }

// compile like this: cc ft_strlcpy.c -lbsd

/*
copia numero size de caracteres desde src a dst y los
sobrescribiendo dst

pero se asegura de que siempre una unidad de size se utiliza 
para poner el 'caracter nulo'

devuelve el length del src que se tendría que copiar a dst

Se pone size - 1 por que j empeza desde cero!! De Caca le digo size 2
me tiene que devolver 'C\0' y NO 'CA'
*/
