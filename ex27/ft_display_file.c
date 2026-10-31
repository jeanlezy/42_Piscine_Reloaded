/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:56:00 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/10/31 20:16:20 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_disp(int file)
{
	char	buffer[1024];
	int		reading;

	reading = read(file, buffer, 1024);
	while (reading > 0)
	{
		write(1, buffer, reading);
		reading = read(file, buffer, 1024);
	}
	close(file);
}

int	main(int argc, char **argv)
{
	int	file;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	ft_disp(file);
	return (0);
}
