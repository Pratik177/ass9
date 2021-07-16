#include <stdio.h>
int main() {
    char s1[100], s2[100], i,len,j;
    printf("Enter string s1: ");
    gets(s1);
    for(i=0;s1[i]!=0;i++){}  
    for (j =i-1; j>=0; j--) {
    printf("%c", s1[j]);}
    return 0;
}
