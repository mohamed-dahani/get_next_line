/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:28:06 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/22 18:15:44 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	len_to_newline(t_list *list)
{
	int	i;
	int	len;

	if (!list)
		return (0);
	len = 0;
	while (list)
	{
		i = 0;
		while (list -> buf[i])
		{
			if (list -> buf[i] == '\0')
			{
				len++;
				return (len);
			}
			i++;
			len++;
		}
		list = list -> next;
	}
	return (len);
}

void	copy_str(t_list *list, char *str)
{
	int	i;
	int	j;

	if (!list)
		return (NULL);
	j = 0;
	while (list)
	{
		i = 0;
		while (list -> buf[i])
		{
			if (list -> buf[i] == '\n')
			{
				str[j] = '\n';
				j++;
				str[j] = '\0';
				return ;
			}
			str[j] = list -> buf[i];
			i++;
			j++;
		}
		list = list -> next;
	}
	str[j] = '\0';
}

void	polish_list(t_list **list)
{
	t_list	*last_node;
	t_list	*clean_node;
	int		i;
	int		j;
	char	*buf;

	last_node = find_last_node(list);
	clean_node = malloc(sizeof(t_list));
	buf = malloc(BUFFER_SIZE + 1);
	if (!clean_node || !buf)
		return (NULL);
	i = 0;
	j = 0;
	while (last_node -> buf[i] && last_node -> buf[i] != '\n')
		i++;
	while (last_node -> buf[i] != '\n' && last_node -> buf[i++])
	{
		buf[j] = last_node -> buf[i];
		j++;
	}
	buf[j] = '\0';
	clean_node -> buf = buf;
	clean_node -> next = NULL;
	dealloc(list, clean_node, buf);
}

void	dealloc(t_list **list, t_list *clean_node, char *buf)
{
	t_list	*tmp;

	if (NULL == *list)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->buf);
		free(*list);
		*list = tmp;
	}
	*list = NULL;
	if (clean_node->buf[0])
		*list = clean_node;
	else
	{
		free(buf);
		free(clean_node);
	}
}
