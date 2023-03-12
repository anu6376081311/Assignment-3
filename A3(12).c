#include<stdio.h>
int main(){
char x;
printf("Enter a character :");
scanf("%c",&x);
if(x>=65 && x<=90)
    printf("Given alphabet is in upper case");
else if(x>=97 && x<=122)
    printf("Given number is in lower case");
else
    printf("Other");
return 0;
}
