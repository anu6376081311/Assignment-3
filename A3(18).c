#include<stdio.h>
int main(){
int n;
printf("Enter the month:");
scanf("%d",&n);
if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    printf("The days in given month is 31");
else if(n==2)
    printf("THe days in given month is 28 0r 29");
else
    printf("The days in given month is 30 ");
return 0;
}
