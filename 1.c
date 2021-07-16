#include<stdio.h>
int main()
{
    char str1[30],i,count;
    puts("enter a string ...");
    gets(str1);
    for(i =0; str1[i]!='\0' ;++i);
    count=i;
    printf("the length of string is %d\n",count);
    return 0;
}
