/*
** EPITECH PROJECT, 2022
** concat_params
** File description:
** concat_params
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    while(*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}

char *concat_params(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    char * str;
    
    str = malloc(sizeof(char) * (argc + 1));
    while ( a < argc) {
        while (argv[a][b]) {
        str[c] = argv[a][b];
        b++;
        c++;
        }
        if (a != argc - 1)
               str[c++] = '\n';
        b = 0;
        a++;
    }
    str[c] = '\0';
    return (str);
}

int main(int ac, char **av)
{
    my_putstr(concat_params(ac, av));
    return (0);
}
