/*
** EPITECH PROJECT, 2022
** my_print_params
** File description:
** my_print_params
*/

void my_putchar(char c)
{
    write(1 ,&c ,1);
}

int my_putstr(char const *str)
{
    while(*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}

void my_print_params(int ba, char **ca)
{
    int valeur = 0;

    while (valeur < ba)
    {
        my_putstr(ca[valeur]);
	my_putchar('\n');
	valeur++;
    }
}

int main(int ba , char **ca)
{
    my_print_params(ba,ca);
    return (0);
}
