#include<stdio.h>
int main()
{
    char *p[3] = {                       //指针数组，它是一个数组，数组中每个元素存放一个指针
        "visual studio code",
        "fishc.com",
        "the c programming language"
    };                                  //这里三个字符串单独存储，数组里是三个字符串的地址
    int i;

    for ( i = 0; i < 3; i++)
    {
        printf("%s\n",p[i]);    //这里p[i]就是三个字符串的地址了，如果写*p[i]就成了地址的地址。前面%s会根据字符串的地址将整个字符串输出
    }
    
}