#include <stdio.h>

void main()
{
    char a = 'A';
    int n;
    int c = 3;

    printf("Input the number of Letters : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= c/2 ; j++) 
        {
            printf("%c ", a++);
        }

        a= a - 2;

        for (int j = 1; j < c / 2; j++) 
        {
            printf("%c ", a--);
        }
        c = c + 2;
        a = 'A';
        printf("\n");
    }
}