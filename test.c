#include <stdio.h>

int main(void)
{
    int n = 50;

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


        printf("\n");
        
    }

    
}

