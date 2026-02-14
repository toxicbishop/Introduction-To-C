#include <stdio.h>
void main()
{
    int i, j, k, a[10][10], b[10][10], c[10][10], m, n, p, q;
    printf("Enter the order of matrix A:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of matrix B:\n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Matrices are Incompatible\n");
    else
    {
        printf("Enter Matrix A\n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        printf("Enter Matrix B\n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);
        // matrix multiplication
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf("Matrix A:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        printf("Matrix B:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }
        printf("Matrix C:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", c[i][j]);
            printf("\n");
        }
    }
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input two matrices A and B with their orders (m, n) and (p, q).
Step 3: If n is not equal to p, display "Incompatible" and stop.
Step 4: Input elements of Matrix A and Matrix B.
Step 5: For each row i from 0 to m-1:
    a. For each column j from 0 to q-1:
        i. Set c[i][j] = 0.
        ii. For k from 0 to n-1, set c[i][j] = c[i][j] + a[i][k] * b[k][j].
Step 6: Display Matrix A, Matrix B, and the result Matrix C.
Step 7: Stop
*/
