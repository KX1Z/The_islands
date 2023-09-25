/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-countisland-keziah.picq
** File description:
** count_island
*/

#include "include/my.h"

int check_if_valid_island(char **map)
{
    int length_one = my_strlen(map[0]);
    int tmp;

    for (int i = 1; map[i] != NULL; i++) {
        tmp = my_strlen(map[i]);
        if (tmp != length_one)
            return 1;
    }
    return 0;
}

void fill_island(char islands, int i, int j, char **map)
{
    if (map[i][j] != 'X')
        return;
    map[i][j] = islands;
    if (j != 0)
        fill_island(islands, i, j - 1, map);
    if (j != my_strlen(map[0]))
        fill_island(islands, i, j + 1, map);
    if (i != 0)
        fill_island(islands, i - 1, j, map);
    if (map[i + 1] != NULL)
        fill_island(islands, i + 1, j, map);
}

void check_islands(char *islands, char **map, int i, int j)
{
    if (map[i][j] == 'X') {
        fill_island(*islands, i, j, map);
        *islands = *islands + 1;
    }
}

int count_island(char** world)
{
    char islands = '0';
    char *ptr = &islands;
    if (check_if_valid_island(world) == 1)
        return 0;
    for (int i = 0; world[i] != NULL; i++) {
        for (int j = 0; world[i][j] != '\0'; j++) {
            check_islands(ptr, world, i, j);
        }
    }
    return islands - 48;
}
