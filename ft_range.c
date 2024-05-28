/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trochas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:03:00 by trochas           #+#    #+#             */
/*   Updated: 2023/08/27 17:40:18 by trochas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

	if (min >= max)
		return (NULL);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (NULL);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
/*
#include <stdio.h>
int	main()
{
	int	*tab;
	int	i;
	int	min = -5;
	int	max = 5;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (i++ < max - min - 1)
			printf("%d\n", tab[i]);
	}
	else
		printf("error tab null");
}
*/
