#include<stdio.h> 
void main() 
{ 
float a,b,res; 
char op; 
printf("Enter arithmetic expression[operand1 operator operand2]:"); 
scanf("%f%c%f",&a,&op,&b); 
switch(op) 
{ 
case'+': 
res=a+b; 
printf("\nsum=%f",res); 
break; 
case'-': res=a-b; 
printf("\nDifference=%f",res); 
break; 
case'*': 
res=a*b; 
printf("\nProduct=%f",res); 
break; 
case'/':  
res=a/b; 
printf("\nQuotient=%f",res); 
break; 
default: printf("Invalid operator!"); 
break; 
} 
} 

/* 
ALGORITHM:
Step 1: Start
Step 2: Input operand1, operator and operand2.
Step 3: If operator is '+' compute sum = operand1 + operand2 and display.
Step 4: If operator is '-' compute difference = operand1 - operand2 and display.
Step 5: If operator is '*' compute product = operand1 * operand2 and display.
Step 6: If operator is '/' compute quotient = operand1 / operand2 and display.
Step 7: If any other operator, display "Invalid operator!".
Step 8: Stop
*/
