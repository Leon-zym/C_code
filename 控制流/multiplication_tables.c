/*
#include<stdio.h>
int main()
{
    int i,j,result;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            result=i*j;
            printf("%d x %d = %d\n",i,j,result);
        }
    }
}
*/


    //version 2.0
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d x %d = %d\t",i,j,i*j);
        }
        putchar('\n');
    }
}