#include <stdio.h>

int main()
{
    char a[50];
    int i, j, c;

    printf("Enter a string: ");
    scanf("%49s", a);

    for (i = 0; i <= 3; i++)
    {
        c = 0;

        for (j = 0; a[j] != '\0'; j++)
        {
            if (a[j] == '0' + i)
            {
                c++;
            }
        }

        printf("%d", c);

        if (i < 3)
            printf(" ");
    }

    printf("\n");

    return 0;
}