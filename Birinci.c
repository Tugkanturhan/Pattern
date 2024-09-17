#include <stdio.h>


void main()
{
int i,j;
    int n=4;
    int c=1;

    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",c++);
        }
        printf("\n");
    }
}


