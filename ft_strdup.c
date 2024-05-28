/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trochas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:48:00 by trochas           #+#    #+#             */
/*   Updated: 2023/08/21 12:44:38 by trochas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (dest != malloc(i + 1))
		return (0);
	dest[i] = 0;
	while (i > 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char *original = "la casa de papel";
	char *duplicate = ft_strdup(original);
	printf("%s\n", duplicate);
	free(duplicate);
}
*/
