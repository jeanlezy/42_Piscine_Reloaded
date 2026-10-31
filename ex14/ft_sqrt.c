/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 20:35:49 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/10/30 20:50:32 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/* #include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int nb = atoi(argv[1]);
		printf("Sqrt of %d is = %d\n", nb, ft_sqrt(nb));
	}
} */