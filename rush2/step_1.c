/*
** EPITECH PROJECT, 2022
** step_1
** File description:
** ok
*/

int recherche(int argc, char **argv)
{
    int count = 0;

    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] == argv[2][0] || argv[1][i] == (argv[2][0] + 32)) {
            count++;
        }
    }

    my_putchar(argv[2][0]);
    my_putchar(':');
    my_put_nbr(count);
    return count;
}

int main(int argc, char **argv)
{
    recherche(argc, argv);
    return 0;
}
