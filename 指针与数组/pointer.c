#include<stdio.h>
int main()
{
    int number=12;
    char character='c';

    int *pn=&number;
    char *pc=&character;

    printf("number is %d\n",*pn);
    printf("character is %c\n",*pc);

    printf("the address of number is %p\n",pn);
    printf("the address of character is %p\n",pc);

    printf("the size of pointer is %d\n",sizeof(pn));
}