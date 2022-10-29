/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_putstr
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
}

int main()
{
    my_putstr("Epitech");
}
