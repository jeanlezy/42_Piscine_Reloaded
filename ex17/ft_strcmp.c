/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:03:39 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/10/30 21:07:55 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/* #include <stdio.h>
int main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("\n");
		return (0);
	}
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
} */