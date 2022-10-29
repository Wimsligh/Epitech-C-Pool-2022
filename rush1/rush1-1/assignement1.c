/*
** EPITECH PROJECT, 2022
** rush-1-1
** File description:
** carre
*/

calline(i, j, l, m);

void line(int l)
{
    int i;

    for ( i = 1 ; i <= l ; i++ ) {
        lineb( i , l );
    }
    my_putchar('\n');
}

void column(int m)
{
    int j;

    for (j = 1 ; j <= m ; j++) {
        columnb( m , j );
    }
    my_putchar('\n');
}

int rushb( int x, int y )
{
    int a = 1;
    while ( a < ( y - 1 ) ) {
        column(x);
        a++;
        if ( (a + 1) == y ) {
            line(x);
        }
    }
}

void rush( int x , int y )
{
    int a = 1;

    line(x);
    if ( x < 1 ) {
        return;
    } else {
        rushb(x,y);
    }
}
