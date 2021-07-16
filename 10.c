#include <stdio.h>
#include <string.h>
#define size 20
int main()
{
   char str[size][size],temp[size];
   int n,i,j;
   printf("Enter a number of string \n");
   scanf("%d",&n);
    printf("enter a string :\n");
    for(i=0;i<n;++i)
    {
       printf("%d)",i+1);
       scanf("%s",str[i]);
    }
    for(i=0;i<n-1;++i){
       for(j = 0;j < n - 1 - i;++j)
       {
          if(strcmp(str[j],str[j+1] )>0)
          {
             strcpy(temp,str[j]);
             strcpy(str[j],str[j+1]);
             strcpy(str[j+1],temp);
          }
       }
    }
    printf("string in alphabetical order :\n ");
    for(i=0;i<n;++i)
    printf("%d)  %s\n",i+1,str[i]);
    return 0;
}