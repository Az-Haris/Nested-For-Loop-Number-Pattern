#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int row, col, n;

    printf("Please Enter Pattern Value = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("  %d",col);
        }
        printf("\n");
    }


    getch();
    return 0;
}
