/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:38:44 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/10/30 19:45:26 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/* #include <stdio.h>
int main(void)
{
	int a = 4;
	int b = 2;
	int *x1 = &a;
	int *x2 = &b;

	ft_swap(x1, x2);
	printf("New value of a:%d and b:%d\n", a, b);
} */