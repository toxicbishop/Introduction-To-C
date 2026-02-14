#include <stdio.h> 
#include <math.h> 
void main() 
{ 
int a,b,c; 
float r1,r2,d,rp,ip,r; 
printf("Enter three coefficients\n"); 
scanf("%d%d%d",&a,&b,&c); 
if (a==0) 
printf("Invalid Input\n"); 
else 
{ 
d=b*b-4*a*c; 
r=sqrt(fabs(d)); 
if (d>0) 
{ 
r1=(-b+r)/(2.0*a); 
r2=(-b-r)/(2.0*a); 
printf("Roots are Real and Distinct\n"); 
printf("Root1=%f\nRoot2=%f\n",r1,r2); 
} 
else if (d==0) 
{ 
r1=r2=-b/(2.0*a); 
printf("Roots are Real and Equal\n"); 
printf("Root1=Root2=%f\n",r1); 
} 
else 
{ 
rp=-b/(2.0*a); 
ip=r/(2.0*a); 
printf("Roots are Real and Imaginary\n"); 
printf("Root1=%f+i%f\nRoot2=%f-i%f\n",rp,ip,rp,ip); 
} 
} 
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input coefficients a, b, c.
Step 3: If a is 0, display "Invalid Input" and stop.
Step 4: Calculate discriminant d = b^2 - 4ac.
Step 5: If d > 0, calculate real and distinct roots: r1 = (-b+sqrt(d))/(2a), r2 = (-b-sqrt(d))/(2a) and display.
Step 6: Else if d = 0, calculate real and equal roots: r1 = r2 = -b/(2a) and display.
Step 7: Else (d < 0), calculate imaginary roots: real part = -b/(2a), imaginary part = sqrt(|d|)/(2a) and display.
Step 8: Stop
*/
