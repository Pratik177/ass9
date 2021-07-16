#include<stdio.h>
int main()
    {
       char s1[100],s2[100];
       int i,j;
       puts("enter a string ...");
       gets(s1);
       puts("enter a 2nd string ...");
       gets(s2);
       i=0;
  while(s1[i] == s2[i] && s1[i]!='\0')
  
     i++;
     if (s1[i]>s2[i])
     printf("s1>s2");
     else if (s1<s2)
   printf("s2>s1");
   else
   printf("s1=s2");
   return 0;
    }
