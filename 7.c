#include<stdio.h>
int main()
{
    char line[100];
    int i,cons=0,vowel=0,space=0,digit=0;
    printf("enter a string...");
    gets(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i] =='a'  ||  line[i] =='e'  || line[i]=='i' ||line[i]=='o'  || line[i]=='u'||
        line[i] =='A'|| line[i] =='E'|| line[i] =='I'|| line[i] =='O'|| line[i] =='U') {++vowel;}
     else if((line[i]>'a' && line[i]<'z')||(line[i]>'A' && line[i]<'Z'))   { ++cons;}
     else if (line [i]>='0' && line[i]<='9') {++digit;}
    else if (line[i]=' ') {++space;}
    }
    printf("the vowel is %d\n", vowel);
    printf("the consonant is %d\n",cons);
    printf("the digit is %d\n,",digit);
    printf("the space is %d\n",space);
    return 0;
}