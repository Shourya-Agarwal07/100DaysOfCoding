// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h> 

int main()
{
    FILE *infile, *outfile;
    char ch;
    infile = fopen("info.txt", "r");
    if (infile == NULL)
    {
        printf("Error: Cannot open info.txt\n");
        return 1;
    }
    outfile = fopen("output.txt", "w");
    if (outfile == NULL)
    {
        printf("Error: Cannot create output.txt\n");
        fclose(infile);
        return 1;
    }
    while ((ch = fgetc(infile)) != EOF)
    {
        fputc(toupper(ch), outfile);
    }

    printf("File converted successfully! Output written to output.txt\n");
    fclose(infile);
    fclose(outfile);

    return 0;
}
