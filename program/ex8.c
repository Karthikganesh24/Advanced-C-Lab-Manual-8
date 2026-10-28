#include <stdio.h>
#include <string.h>

void sortString(char s[])
{
    int i, j;
    char temp;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int nextPermutation(char s[])
{
    int i, j, n = strlen(s);
    char temp;

    i = n - 2;

    while (i >= 0 && s[i] >= s[i + 1])
        i--;

    if (i < 0)
        return 0;

    j = n - 1;

    while (s[j] <= s[i])
        j--;

    temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    for (j = n - 1, i++; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    return 1;
}

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%99s", s);

    sortString(s);

    printf("Permutations in lexicographical order:\n");

    do
    {
        printf("%s\n", s);
    } while (nextPermutation(s));

    return 0;
}