#include<stdio.h>
int main()
{
    char a[100],b[100],i;
    puts("enter a string ...");
    gets(a);
    puts("the copied string in another string 2  is....");
    for(i=0; a[i] !='\0';++i)
    {
        b[i]=a[i];
    }
    puts(b);
    return 0;
}