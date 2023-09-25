/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday07-keziah.picq
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != 0)
        i++;
    return i;
}
