#include <stdio.h> 
void main() 
{ 
int a[10]; 
int i, j, n, key; 
int low, mid, high,found=0; 
printf("Enter the value of num \n"); 
scanf("%d", &n); 
printf("Enter the elements one by one \n"); 
for (i=0;i<n;i++) 
{ 
scanf("%d",&a[i]); 
} 
printf("Enter the element to be searched \n"); 
scanf("%d", &key ); 
/* Binary searching begins */ 
low = 0; 
high = n-1; 
while(low<=high) 
{ 
mid = (low + high) / 2; 
if (key == a[mid]) 
{ 
found =1; 
break; 
} 
if (key < a[mid]) 
high = mid - 1; 
else if (key > a[mid]) 
low = mid + 1; 
} 
if (found==1) 
{ 
printf("SEARCH SUCCESSFUL \n"); 
} 
else 
{ 
} 
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input size n and n sorted elements into array a.
Step 3: Input the search key.
Step 4: Set low = 0, high = n - 1.
Step 5: While low <= high:
    a. mid = (low + high) / 2.
    b. If key == a[mid], set found = 1 and break.
    c. If key < a[mid], set high = mid - 1.
    d. Else, set low = mid + 1.
Step 6: If found == 1, display "SEARCH SUCCESSFUL".
Step 7: Else, display "SEARCH UNSUCCESSFUL".
Step 8: Stop
*/
