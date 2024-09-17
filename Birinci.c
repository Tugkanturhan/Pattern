#include <stdio.h>




void ptr1()
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
void ptr2()
{
    int i,j;


    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void main()
{
    int secim;

    printf("kacinci pattern'i görnek istersen onun sayisini giriniz..");

    scanf("%d",&secim);
    switch (secim)
    {
    case 1:ptr1();
    break;
    case 2:ptr2();
    break;
    case 3:degistirme();
    break;
    case 4:
    break;
    case 5:
    break;
    case 6:
    break;
    case 7:
    break;
    case 8:
    break;
    case 9:
    break;
    default:
    break;
    }
}

