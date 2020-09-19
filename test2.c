#include <stdio.h>

int main(void)
{
    int n = 5;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

            printf("  ");

        for(int l = 0; l <= i; l++)
        {
            printf("#");
        }

        for(int m = 0; m < n - 1; m++)
        {
            printf(" ");
        }


        printf("\n");
        
    }

    
}

