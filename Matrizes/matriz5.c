    #include <stdio.h>
// video 4 do modulo 2
// matriz principal em 0 sem interacao
int main() 
{
    int mat[5][5],lin, col;
    for (lin=0; lin<5; lin++ )
    {
        for ( col=0; col<5; col++)
        {
            mat[lin][col]=1;
            if (lin==col)
                mat[lin][col]=0;
            printf("%d",mat[lin][col]);
        }
        printf ("\n");
    }
    return 0;
}