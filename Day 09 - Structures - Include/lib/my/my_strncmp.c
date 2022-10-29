/*
** EPITECH PROJECT, 2022
** strncmp
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int m = 0;

    while (i < n) {
        if (s1[m]> s2[m])
            return (1);
        else if (s1[m] < s2[m])
            return (-1);
        if ((n - 1) == i)
            return (0);
        m++;
    }
}