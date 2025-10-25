// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start, end;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\n')
            i++;

        start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;
        end = i - 1;
        int left = start, right = end;
        char temp;
        while (left < right)
        {
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
    printf("Sentence after reversing each word:\n%s", str);

    return 0;
}
