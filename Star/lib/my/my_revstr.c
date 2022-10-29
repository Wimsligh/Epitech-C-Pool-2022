/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int m = 0;
    int a = 0;
    char t = 0;
    while ( str[m] != '\0')
    ++m;
    while (a < m) {
        --m;
        t = str[m];
        str[m] = str[a];
        str[a] = t;
        ++a;
        }
        return (str);
}
