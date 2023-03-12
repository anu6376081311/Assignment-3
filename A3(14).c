#include<stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
if(n%7==0 || n%3==0)
    printf("The given number is divisible by 7 or 3");
else
    printf("The given number is not divisible by 7 or 3");
return 0;
}
