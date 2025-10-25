// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[200];
    int i, len;
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++)
    {
        if (i == 0 && name[i] != ' ')
        {
            printf("%c.", toupper(name[i]));
        }
        if (name[i] == ' ' && i + 1 < len)
        {
            int j;
            int isLastSpace = 1;
            for (j = i + 2; j < len; j++)
            {
                if (name[j] == ' ')
                {
                    isLastSpace = 0;
                    break;
                }
            }
            if (isLastSpace)
            {
                printf(" %s", &name[i + 1]); 
                break;
            }
            else if (name[i + 1] != ' ')
            {
                printf("%c.", toupper(name[i + 1]));
            }
        }
    }

    printf("\n");
    return 0;
}
