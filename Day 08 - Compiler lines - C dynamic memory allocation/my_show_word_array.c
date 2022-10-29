/*
** EPITECH PROJECT, 2022
** my_show_world_array
** File description:
** my_show_world_array
*/

int my_show_word_array(char * const *tab)
{
    int m = 0;
    for (m; tab[m] != '\0'; m++) {
        my_putstr(tab[m]);
        my_putchar('\n');
    }
    return (0);
}
