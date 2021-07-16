#include<stdio.h>
int main()
{
    char str1[100];
    int i,c=0;
    printf("write a statements:\n");
    gets(str1);
    for(i=0; str1[i]!='\0';i++)
    {
      if(str1[i]==' ')
      {
          c++;
      }
    }
    printf(" \n number of words = %d",c+1);
    return 0;
}
