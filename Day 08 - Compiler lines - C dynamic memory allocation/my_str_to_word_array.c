/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int caractere(char c)
{
    if (c >= '0'&& c <= '9'|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        return (1);
    }
    return (0);
}

int compteur(char const *str)
{
    int a = 0;
    int b = 0;
    while (str[a] != '\0') {
           if (caractere(str[a]) == 1 && caractere(str[a + 1]) !=1){
                   b++;
           }
           a++;
    }
    return (b);
}

int longueur_texte(char *str, int o)
{
    while (str[o] != '\0') {
        if (caractere(str[o]) != 1)
                 return (0);
        o++;
    }
    return (o);
}

int motChaine(char *th)
{
    int y=0;
    int compteur=0;
    while (th[y]!='\0')
    {
 
        if (th[y]==' '){
            while(th[y]==' ' && th[y]!='\0'){
                y++;
                if(th[y]!=' '){compteur++;}
            }
        }
        y++;
    }
}
char **my_str_to_word_array(char const *str)
{
     int m = compteur(str);
     char **resultat = malloc(sizeof(char*)* motChaine(str));
     int p = 0;
     int e = 0;
     int r = 0;

     while (e < m) {
         r = 0;
         resultat[e] = malloc(longueur_texte(str, e) + 1);
         while (str[p] != '\0' && caractere(str[p]) != 0) {
             resultat[e][r] = str[p];
             r++;
             p++;
         }
         resultat[e][r] = '\n';
         resultat[e][r + 1] = '\0';
         p++;
         e++;
     }
     free(resultat);
     return (resultat);
}

int main()
{
    char mat = "Salut je m'appelle matheo salut salut";
    my_str_to_word_array(mat);
}
