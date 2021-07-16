#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int i,j;
    printf("enter a string to upper case ...\n");
    gets(str1);
    printf("the upper case string is :%s",strupr(str1));
    return 0;
}