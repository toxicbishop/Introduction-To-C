#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;
    printf("Enter the filename to open for reading");
    scanf("%s", filename);
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s ", filename);
        exit(0);
    }
    printf("Enter the filename to open for writing ");
    scanf("%s", filename);
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s ", filename);
        exit(0);
    }
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("Contents copied to %s", filename);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

/*
ALGORITHM:
Step 1: Start
Step 2: Input source filename and destination filename.
Step 3: Open source file in read mode ('r') and destination file in write mode ('w').
Step 4: If either file cannot be opened, display error and stop.
Step 5: Read a character from source file.
Step 6: While not end of file (EOF):
    a. Write the character to destination file.
    b. Read next character from source file.
Step 7: Close both files and display success message.
Step 8: Stop
*/
