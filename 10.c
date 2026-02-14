#include <stdio.h>
    void main()
{
    struct stud
    {
        char name[25];
        char usn[25];
        int marks;
    };
    struct stud s[25];
    int n, i, sum;
    float average;
    sum = 0;
    printf("\nenter number of students :");
    scanf("%d", &n);
    printf("enter the name usn and marks of %d students\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%s%d", s[i].name, s[i].usn, &s[i].marks);
        sum = sum + s[i].marks;
    }
    average = sum / (float)n;
    printf("average marks=%f", average);
    printf(" \nDetails of students scoring above average marks\n");
    for (i = 0; i < n; i++)
    {
        if (s[i].marks >= average)
            printf("name=%s \t usn=%s \t marks= %d\n", s[i].name, s[i].usn, s[i].marks);
    }
    printf(" \nDetails of students scoring below average marks\n");
    for (i = 0; i < n; i++)
    {
        if (s[i].marks < average)
            printf("name=%s \t usn=%s \t marks= %d\n", s[i].name, s[i].usn, s[i].marks);
    }
}

/*
ALGORITHM:
Step 1: Start
Step 2: Define a structure 'stud' with name, usn, and marks.
Step 3: Input number of students n.
Step 4: Input details for n students and calculate sum of marks.
Step 5: Calculate average = sum / n.
Step 6: For each student, if marks >= average, display their details in "Above Average" section.
Step 7: For each student, if marks < average, display their details in "Below Average" section.
Step 8: Stop
*/
