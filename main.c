/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:11:00 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/24 17:42:14 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	// // test get next line;
	// int		fd;
	// int		lines;
	// char	*line;

	

	// fd = open("test.txt", O_RDONLY);
	// lines = 1;
	// while ((line = get_next_line(fd)))
	// 	printf("%d- %s", lines++, line);

	
	
	// // use write func to write into file descriptor
	// int fd = open("test.txt", O_WRONLY);
	// write(fd, "hello", 5);

	

	// // use fopen func to write into file descriptor
	// FILE *myfile = fopen("test.txt", "w");
	// fprintf(myfile, "hi is me");
	// fclose(myfile);

	

	// // use ac av args to write into file descriptor
	// int i = 1;
	// int fd = open("test.txt", O_WRONLY);
	// while (i < ac)
	// {
	// 	write(fd, av[i], ft_strlen(av[i]));
	// 	write(fd, "\n", 1);
	// 	i++;
	// }

	
	
	// // use shell script to write into file descriptor
	// int fd = open("test.txt", O_WRONLY);
	// char *p;
	// while (1)
	// {
	// 	p = get_next_line(1);
	// 	if (!p)
	// 		break ;
	// 	write(fd, p, ft_strlen(p));
	// }
}
