/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

int my_strlen(char const *str)
{
    int compte;
    compte = 0;

    while (str[compte] != '\0')
        compte++;
    return (compte);
}

char *my_strdup(char const *src)
{
    int a = 0;
    char *dest = malloc(my_strlen(src));

    while (src[a] != '\0') {
	dest[a] = src[a];
        a = a + 1;
    }
    dest[a] = '\0';
    return (dest);
}

int main() 
{
    char* toto = my_strdup("hello");
    printf("%s", toto);
}
