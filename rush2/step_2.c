/*
** EPITECH PROJECT, 2022
** step_2
** File description:
** ok
*/

void my_putchar(char c)
{
    write(1 , &c , 1);
}

int my_put_nbr(int nb)
{
    int a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        a = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(a + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}

int my_if(char **argv, int i, int j, int count)
{
    if (argv[1][i] == argv[j][0] || argv[1][i] == argv[j][0] + 32 || argv[1][i] == argv[j][0] - 32) {
        count++;
    }
    return count;
}

int recherche(int argc, char **argv)
{
    int count = 0;
    int i;

    for (int j = 2; j < argc; j++) {
        for (i = 0; argv[1][i] != '\0';i++) {
            count = my_if(argv, i, j, count);
        }
        my_putchar(argv[j][0]);
        my_putchar(':');
        my_put_nbr(count);
        my_putchar('\n');
        count = 0;
    }
    return count;
}

int main(int argc, char **argv)
{
    recherche(argc, argv);
    return 0;
}
