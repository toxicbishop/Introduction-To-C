#include<stdio.h> 
int main() 
{ 
int i,j,row; 
printf("Enter number of rows: "); 
scanf ("%d", &row); 
for(i=1;i<=row;i++) 
{
    for(j=1;j<=row-i;j++) 
{ 
printf(" "); 
} 
for(j=1; j<=i; j++) 
{ 
printf("%d", j); 
} 
for(j=i-1;j>=1;j--) 
{ 
printf("%d", j); 
} 
printf("\n"); 
} 
return 0; 
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input number of rows.
Step 3: For i from 1 to row:
    a. Print (row - i) spaces.
    b. For j from 1 to i, print j.
    c. For j from i-1 down to 1, print j.
    d. Print newline.
Step 4: Stop
*/
