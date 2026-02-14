 #include <stdio.h> 
void main() 
{ 
int units; 
float charges; 
char name[20]; 
printf("Enter the name \n"); 
scanf("%s",name); 
printf("Enter the units consumed\n"); 
scanf("%d",&units); 
if (units<=200) 
charges=units *0.8; 
else if (units<=300) 
charges=200*0.8+(units-200)*0.9; 
else 
charges=200*0.8+100*0.9+(units-300)*1.0; 
charges=charges+100; 
if (charges> 400) 
charges =charges +(charges*0.15); 
printf("name \t units\t charges\t\n"); 
printf("%s \t %d\t %f\t\n",name,units,charges); 
return 0; 
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input name and units consumed.
Step 3: If units <= 200, charges = units * 0.8.
Step 4: Else if units <= 300, charges = 200 * 0.8 + (units - 200) * 0.9.
Step 5: Else, charges = 200 * 0.8 + 100 * 0.9 + (units - 300) * 1.0.
Step 6: Add minimum charge of 100 to charges.
Step 7: If charges > 400, add 15% surcharge.
Step 8: Display name, units, and total charges.
Step 9: Stop
*/
