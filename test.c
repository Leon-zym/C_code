#include<stdio.h>
int main()
{
    printf("integer:%d\n",1+(int)2.0);      //但可以强制转换，会舍弃小数部分。
    printf("float:%f\n",1+2.0);
}