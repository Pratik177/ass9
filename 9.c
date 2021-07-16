#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int cmp;
    printf("enter a string for palidrome \n ");
    gets(str1);
    strcpy(str2,str1);
     strrev(str1);
    printf("the reverse  palindrome number is: %s",str1);
    cmp=strcmp(str1,str2);
    if (cmp==0)
    {
        printf("\nthe string  is palindrome ");
    }
    else{
        printf("\nthe string is not pandrome");
    }

    return 0;
}