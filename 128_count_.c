// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h> 

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch); 

        if (isalpha(ch))
        { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    fclose(fp);

    return 0;
}
