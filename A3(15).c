#include<stdio.h>
int main(){
int n;
printf("enter the number :");
scanf("%d",&n);
if(n>0)
    printf("The given number is positive");
else if(n<0)
    printf(" The ginen number is negative");
else
    printf("The given number is 0");
return 0;
}
