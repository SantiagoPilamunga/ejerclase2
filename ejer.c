#include <stdio.h>
int main()
{
    int n,m;
    printf("Ingrese el valor para filas: ");
    scanf("%d", &n);
    printf("Ingrese el valor para columnas: ");
    scanf("%d", &m);
    int matrix [n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix [i][j]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i==j)
            {
                matrix[i][j]=1;
                
            }
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
