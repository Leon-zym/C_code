#include<stdio.h>
int main()
{
   int number = 1234;
    int *p = &number;
    void *test = p;
    
    printf("*p = %d\n",*p);
    printf("*test = %d\n",test);
    printf("hello\n");
}