/*
#include<stdio.h>

int main()
{
    char str[] = "visual studio code";
    char *pstr = str;
    int count = 0;

    while (*pstr++ != '\0')
    {
        count++;
    }
    printf("The string has %d characters.\n",count);
          
}
*/

/*
#include<stdio.h>
int main()
{
    char *p[] = {
        "visual studio code",
        "fishc.com",
        "the c programming language"
    };
    int i;

    for ( i = 0; i < 3; i++)
    {
        printf("%s\n",p[i]);
    }
    
}
*/


#include<stdio.h>
int main()
{
    int str[5] = {1,2,3,4,5};
    int (*p)[5] = &str;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*(*p+i));
    }
    
}