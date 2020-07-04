#include<stdio.h>
#include<string.h>

int main()
{
    char a[]="This is an array practice program.";
    char b[]="This is a new array.";
    char c[50];
    int i,n;

    n=strlen(a);
    printf("strlen = %d\n\n",n);

    strcpy(a,b);
    printf("%s\n%s\n\n",a,b);

    strncpy(c,a,7);
    printf("%s\n\n",c);

    strcat(a,b);
    printf("%s\n\n",a);
}