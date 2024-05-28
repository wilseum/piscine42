/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trochas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:29:12 by trochas           #+#    #+#             */
/*   Updated: 2023/08/27 11:58:38 by trochas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
		return (-1);
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
/*
#include <stdio.h>
int	main()
{
	int	i;
	int	*tab;
	int	min;
	int	max;
	int	size;

	min = -5;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (i++ < (max - min - 1))
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("error");
}
*/
