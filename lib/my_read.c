/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_read_line and my_read_file
*/

#include "my.h"

static char *check_line(char *line, int i, int ret)
{
    if (ret <= 0 && i == 0) {
        free(line);
        return NULL;
    }
    line[i] = '\0';
    return line;
}

static int read_char(int fd, char *c)
{
    return read(fd, c, 1);
}

char *my_read_line(int fd)
{
    char *line = malloc(4096);
    int i = 0;
    char c;
    int ret;

    if (!line)
        return NULL;
    ret = read_char(fd, &c);
    while (ret > 0) {
        if (c == '\n')
            break;
        line[i] = c;
        i++;
        ret = read_char(fd, &c);
    }
    return check_line(line, i, ret);
}

static int count_lines(char const *path)
{
    int fd = open(path, O_RDONLY);
    int count = 0;
    char *line;

    if (fd < 0)
        return -1;
    line = my_read_line(fd);
    while (line) {
        count++;
        free(line);
        line = my_read_line(fd);
    }
    close(fd);
    return count;
}

char **my_read_file(char const *path)
{
    int lines = count_lines(path);
    char **arr;
    int fd;

    if (lines < 0)
        return NULL;
    arr = malloc(sizeof(char *) * (lines + 1));
    if (!arr)
        return NULL;
    fd = open(path, O_RDONLY);
    if (fd < 0) {
        free(arr);
        return NULL;
    }
    for (int i = 0; i < lines; i++)
        arr[i] = my_read_line(fd);
    arr[lines] = NULL;
    close(fd);
    return arr;
}
