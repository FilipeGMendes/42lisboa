/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:13:08 by vsoares-          #+#    #+#             */
/*   Updated: 2024/03/17 21:40:03 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_custom.h"

char	*getvaluebykey(int fd, char *key)
{
	char	*line;
	size_t	i;
	ssize_t size;

	i = 0;
	size = 0;
	while ((size = read(fd, &line[i], 1)) > 0)
	{
		if (line[i] == ':') {
            line[i-1] = '\0';
            if (ft_strcmp(line, key) == 0) {
                close(fd);
                return &line[i+1];
            }
        }
        if (line[i] == '\n') {
            line[i] = '\0';
            free(line);
            line = NULL;
            i = 0;
        } else {
            i++;
        }
	}
    free(line);
	return NULL;
}

char* get_value_from_dict(const char* filename, char* key) {

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        return NULL;
    }

    char* line = NULL;
    size_t n = 0;
    ssize_t len = 0;
    while ((len = read(fd, line ? line + n : line, 1)) > 0) {
        if (line == NULL) {
            line = malloc(1024);
            if (line == NULL) {
                perror("malloc");
                close(fd);
                return NULL;
            }
        }
        if (line[n] == ':') {
            line[n-1] = '\0';
            if (ft_strcmp(line, key) == 0) {
            	char* value = malloc(1024);
                if (value == NULL) {
                    perror("malloc");
                    free(line);
                    close(fd);
                    return NULL;
                }
                ft_strcpy(value, line + n + 1);
                free(line);
                close(fd);
                return value;
            }
        }
        if (line[n] == '\n') {
            line[n] = '\0';
            free(line);
            line = NULL;
            n = 0;
        } else {
            n++;
        }
    }

    free(line);
    close(fd);
    return NULL;
}


void	read_dict(char *number)
{
	char *value = get_value_from_dict("./dicts/test.dict", number);


	/* int		fd;
	char	*buff;

	fd = open("./dicts/test.dict", O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}

	buff = getvaluebykey(fd, number);
 	*/
	if (value != NULL) {
        printf("The value of key '40' is: %s\n", value);
        free(value);
    } else {
        printf("Key '40' not found in dictionary.\n");
    }

	// ft_putstr(buff);

	ft_putstr(number);
}
