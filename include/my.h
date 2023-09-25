/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-keziah.picq
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stddef.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

int my_strlen(char const *str);
void my_putchar(char c);
char *my_strcpy(char *dest, char const *src);
int my_putstr(char const *str);
void my_putchar(char c);
bool is_alphanumeric(char c);
void my_putchar(char c);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void fill_island(char islands, int i, int j, char **map);
int count_island(char** world);
void check_islands(char *islands, char **map, int i, int j);
int count_words(char **tab);
int count_lines_tab(char **tab);
char **declare_tab(char **map);
int check_if_valid_island(char **map);

#endif /* !MY_H_ */
