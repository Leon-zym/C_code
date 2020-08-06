#include<stdio.h>
int main()
{
    int i,j;
    int a[3][6]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8};
    int b[4][5]={{1,2,3,4,5},{6,7,8,9,0,},{1,2,3,4,5}};


    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}