// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (isalpha(str1[i]))
            count1[tolower(str1[i]) - 'a']++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (isalpha(str2[i]))
            count2[tolower(str2[i]) - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
