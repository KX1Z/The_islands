/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-keziah.picq
** File description:
** is_alphanumeric
*/

#include <stdbool.h>

bool is_alphanumeric(char c)
{
    if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9'))
        return (true);
    return (false);
}
