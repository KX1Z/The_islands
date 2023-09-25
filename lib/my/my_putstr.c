/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-keziah.picq
** File description:
** my_putstr
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != 0; i++)
        my_putchar(str[i]);
}
