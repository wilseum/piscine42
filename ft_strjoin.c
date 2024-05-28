/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trochas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:18:55 by trochas           #+#    #+#             */
/*   Updated: 2023/08/21 21:35:10 by trochas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			len++;
		if (i++ == size)
			break ;
		j = 0;
		while (sep[j++])
			len++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		pos;
	int		len;
	char	*ret;

	len = get_len(size, strs, sep);
	ret = malloc(len + 1);
	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ret[pos++] = strs[i][j++];
		if (i++ == size)
			break ;
		j = 0;
		while (sep[j])
			ret[pos++] = sep[j++];
	}
	ret[pos] = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main()
{
	char *tab[5];
	tab[0] = "au";
	tab[1] = "volant";
	tab[2] = "d'un";
	tab[3] = "bolide";
	tab[4] = "allemand";
	printf("%s\n", ft_strjoin(5, tab, "_ _"));
	return 0;
}
*/
