/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:45:41 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/10/30 20:03:31 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/* #include <stdio.h>
int main(void)
{
	int div;
	int mod;
	
	ft_div_mod(10, 2, &div, &mod);
	printf("Result div: %d and Mod: %d\n", div, mod);
	
	return (0);
} */