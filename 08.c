#include <stdio.h>
void main()
{
    int n, i, j, a[10], t;
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("Sorted Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input size n and n elements into array a.
Step 3: For i from 0 to n-2:
    a. For j from 0 to n-2-i:
        i. If a[j] > a[j+1], swap a[j] and a[j+1].
Step 4: Display the sorted array.
Step 5: Stop
*/

