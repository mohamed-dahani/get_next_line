/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:43:44 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/22 16:04:16 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*buf;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
t_list	*find_last_node(t_list *lst);
int		len_to_newline(t_list *list);
void	copy_str(t_list *list, char *str);
void	polish_list(t_list **list);
void	dealloc(t_list **list, t_list *clean_node, char *buf);

#endif
