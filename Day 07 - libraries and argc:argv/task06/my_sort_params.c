/*
** EPITECH PROJECT, 2022
** my_sort_params
** File description:
** my_sort_params
*/


void my_putchar(char c)
{
    write(1, &c, 1);
}

int nomb(char *nb) {
	int nombre = 0;
	nombre = nb[0];
	return(nombre);
}

int my_putstr(char const *str)
{
	while (*str != '\0') {
		my_putchar(*str);
		str++;
		}
	}
int my_sort_params(int nb, int ascii, char *str) {
	if(ascii == nb) 
	{
		my_putstr(str);
		my_putchar('\n');
		}
		return (0);
	}
int main(int argc , char **argv)
{
	int ascii = 0;
	int valeur = 0;
	
	while (ascii < 128) {
		valeur = 0;
		while (valeur < argc) {
			my_sort_params(ascii, nomb(argv[valeur]), argv[valeur]);
			valeur++;
		}
		ascii++;
	}
	return (0);
}