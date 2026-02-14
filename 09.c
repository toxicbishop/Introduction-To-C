#include <stdio.h>
int len_str(char s[50]);
int comp_str(char s1[50], char s2[50]);
void concat_str(char s1[50], char s2[50]);
void main()
{
    char s1[50], s2[50], len, c;
    printf("enter the 1st string\n");
    scanf("%s", s1);
    printf("enter the 2nd string\n");
    scanf("%s", s2);
    len = len_str(s1);
    printf("length of the string1 = %d\n", len);
    len = len_str(s2);
    printf("length of the string2 = %d\n", len);
    c = comp_str(s1, s2);
    if (c == 0)
    {
        printf("strings are equal\n");
    }
    else
    {
        printf("strings are not equal\n");
    }
    concat_str(s1, s2);
}
int len_str(char s[50])
{
    int len = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int comp_str(char s1[50], char s2[50])
{
    int len1, len2, i;
    len1 = len_str(s1);
    len2 = len_str(s2);
    if (len1 != len2)
        return 1;
    for (i = 0; i < len1; i++)
    {
        if (s1[i] != s2[i])
            return 1;
    }
    return 0;
}
void concat_str(char s1[50], char s2[50])
{
    int i = 0, j;
    j = len_str(s1);
    while (s2[i] != '\0')
    {
        s1[j] = s2[i];
        j++;
        i++;
    }
    s1[j] = '\0';
    printf("Concatenation of string1 and string2 %s \n", s1);
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input two strings s1 and s2.
Step 3: Calculate length of s1 and s2 by counting characters until '\0'.
Step 4: Compare s1 and s2 character by character. If all match and lengths are same, strings are equal.
Step 5: To concatenate, find the end of s1 and copy characters of s2 starting from there until '\0' of s2.
Step 6: Display concatenanted string.
Step 7: Stop
*/
