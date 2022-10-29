/*
** EPITECH PROJECT, 2022
** cat
** File description:
** refaire le cat
*/
#include <fcntl.h>
#include "../lib/my/my.h"
#include <unistd.h>

void cat_vide(int size, char *buffer)
{
    while (1) {
        size = read(0, buffer, 30 * 1024);
        write(1, buffer, size);
    }
}

int	main(int ac, char **av)
{
    int fd;
    char buffer[30 * 1024];
    int size;
    int i = 1;
    if (ac == 1)
    cat_vide(size, buffer);
    while (i < ac) {
        size = 2;
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_putstr("ERREUR A L OUVERTURE");
            return (1);
        }
        while ((size = read(fd, buffer, 30 * 1024)))
        write(1, buffer, size);
        my_putchar('\n');
        i = i + 1;
    }
}
