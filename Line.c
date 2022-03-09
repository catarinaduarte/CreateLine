#include <stdio.h>

void desenhaLinha(int linha, int totalNiveis )
{
    // 0, 2, 5
    for(int i = 0; i < totalNiveis - linha - 1; ++i)
        printf( "%c", '.' );
    for(int i = 0; i < 2 * linha + 1; ++i)
        printf( "%c", '*' );

    printf( "\n" );
}

void desenhaNivel( int n, int totalNiveis )
{
    for(int i = 0; i < n; ++i)
        desenhaLinha( i, totalNiveis );
}

void desenhaArvore( int n )
{
    for(int i = 1; i <= n; ++i)
        desenhaNivel( i, n );
}


int main()
{
    printf( "Quantos niveis? " );
    int n;
    scanf( "%d", &n );

    if( n <= 0 )
        printf( "Nivel inválido!\n" );
    else
        desenhaArvore( n );

    return 0;
}
