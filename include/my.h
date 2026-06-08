/*
** EPITECH PROJECT, 2025
** my
** File description:
** header file
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>

typedef struct format_rule_s {
    char symbol;
    int (*function_to_call)(va_list *list);
} format_rule_t;

typedef struct my_lst_s {
    void *data;
    struct my_lst_s *next;
} my_lst_t;

/* ===== STRINGS ===== */
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_atoi(char const *str);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strcasecmp(char const *s1, char const *s2);
char *my_strstr(char const *hay, char const *needle);
char *my_strjoin(char const *s1, char const *s2);
int my_str_isnum(char const *str);
int my_str_contains(char const *str, char c);
char *my_strtrim(char const *str);
char *my_str_tolower(char const *str);
char *my_str_toupper(char const *str);
void my_str_replace(char *str, char old, char new);
int my_printf(const char *format, ...);

/* ===== CHARS ===== */
int my_isalpha(char c);
int my_isdigit(char c);
int my_isspace(char c);
int my_isalnum(char c);

/* ===== ARRAYS ===== */
char **my_str_to_word_array(char const *str, const char *delim);
char **my_split(char const *str, char delim);
int my_arrlen(char **arr);
void my_free_arr(char **arr);
void my_sort_arr(char **arr, int (*cmp)(char const *, char const *));

/* ===== FILES / INPUT ===== */
char *my_read_line(int fd);
char **my_read_file(char const *path);
char *my_read_stdin(void);

/* ===== GRID ===== */
char **my_create_grid(int rows, int cols, char fill);
char **my_copy_grid(char **grid, int rows, int cols);
void my_free_grid(char **grid, int rows);
void my_print_grid(char **grid, int rows);

/* ===== LIST ===== */
my_lst_t *my_lstnew(void *data);
void my_lstadd(my_lst_t **lst, void *data);
void my_lstadd_back(my_lst_t **lst, void *data);
int my_lstsize(my_lst_t *lst);
void my_lstfree(my_lst_t *lst);

/* ===== ARGS ===== */
char *my_get_flag(int argc, char **argv, char const *flag);
int my_flag_exists(int argc, char **argv, char const *flag);

/* ===== MATH ===== */
int my_abs(int n);
int my_max(int a, int b);
int my_min(int a, int b);
int my_power(int base, int exp);

/* ===== ERROR ===== */
int my_puterr(char const *msg);

#endif /* !MY_H_ */
