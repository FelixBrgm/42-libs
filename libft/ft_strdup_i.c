/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbruggem <fbruggem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:36:29 by fbruggem          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/10/25 09:05:39 by fbruggem         ###   ########.fr       */
=======
/*   Updated: 2022/10/24 14:53:33 by fbruggem         ###   ########.fr       */
>>>>>>> 240de3b7f8a2de5e8f8c02ad6580c98134c3e7b7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_i(const char *s1, size_t n)
{
	char	*mem;
	int		i;

	i = 0;
	mem = ft_calloc(n + 1, sizeof(char));
	if (mem == NULL)
		return (NULL);
	while (s1[i] != '\0' && i < (int) n)
	{	
		mem[i] = s1[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
