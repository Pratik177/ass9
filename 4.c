#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j;
    puts("enter a string ...");
    gets(a);
    puts("ente a second string...");
    gets(b);
    i=strlen(a);
    for(j=0;a[j] != '\0';i++,j++)
    {
        a[i]= b[j];
    }
    a[i] !='\0';
    printf("the concentration is : %s",a);
    return 0;
}