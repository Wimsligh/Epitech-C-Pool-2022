/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** my_swap
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int a;
    int b;

    a = '6';
    b = '4';

    my_swap(&a , &b);
    my_putchar(a);
    my_putchar(b);
}
