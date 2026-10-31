/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 22:01:12 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:09 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*res;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	res = malloc(sizeof(int) * (range));
	if (!res)
		return (NULL);
	while (i < range)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/* #include <stdio.h>
int main(int argc, char **argv)
{
	int min, max, i, size;
	int *res;
	
	if(argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		res = ft_range(min, max);
		if(!res)
			return (0);
	}
	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d\n", res[i]);
		i++;
	}
	free(res);
} */