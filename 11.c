#include <stdio.h>
#include <math.h>
    void main()
{
    float a[10], *ptr, mean, std, sum = 0, sumstd = 0;
    int n, i;
    printf("Enter the no of elements\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sumstd = sumstd + pow((*ptr - mean), 2);
        ptr++;
    }
    std = sqrt(sumstd / n);
    printf("sum=%f\n", sum);
    printf("Mean=%f\n", mean);
    printf("standard deviation=%f\n", std);
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input size n and n elements into array a.
Step 3: Point ptr to start of array.
Step 4: Traverse array using ptr to calculate sum of elements.
Step 5: Calculate mean = sum / n.
Step 6: Reset ptr and traverse again to calculate sum of squares of differences: sumstd = sumstd + (element - mean)^2.
Step 7: Calculate standard deviation std = sqrt(sumstd / n).
Step 8: Display sum, mean, and standard deviation.
Step 9: Stop
*/
