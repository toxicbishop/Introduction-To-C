#include<stdio.h> 
#include<math.h> 
void main() 
{ 
float x,sum,num,deno,term; 
int degree, i; 
printf("Enter degree:\n"); 
scanf("%d",&degree); 
x=degree*(3.142/180); 
sum=0; 
num=x; 
deno=1; 
i=1; 
do 
{ 
term=num/deno; 
sum=sum+term; 
i=i+2; 
deno=deno*(i-1)*i; 
num=-num*x*x; 
}while(fabs(term)>0.00001); 
printf("Sin %d using Taylor's Series:%f\n",degree,sum); 
printf("Sin %d using built-in Library function:%f\n",degree,sin(x)); 
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input angle in degrees.
Step 3: Convert angle to radians: x = degree * (3.142 / 180).
Step 4: Initialize sum = 0, num = x, deno = 1, i = 1.
Step 5: Repeat:
    a. term = num / deno.
    b. sum = sum + term.
    c. i = i + 2.
    d. deno = deno * (i - 1) * i.
    e. num = -num * x * x.
    Until |term| < 0.00001.
Step 6: Display calculated sin value and built-in library sin value.
Step 7: Stop
*/
