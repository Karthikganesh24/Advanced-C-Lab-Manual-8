#include <stdio.h>

int main()
{
    int n, i, j, min, len;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    len = n * 2 - 1;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            min = i;

            if (j < min)
                min = j;

            if (len - 1 - i < min)
                min = len - 1 - i;

            if (len - 1 - j < min)
                min = len - 1 - j;

            printf("%d ", n - min);
        }

        printf("\n");
    }

    return 0;
}