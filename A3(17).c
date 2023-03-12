#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a,b,c :");
scanf("%d %d %d",&a,&b,&c);
if(a+b>c && b+c>a && a+c>b)
    printf("The tringle is valid");
    else
        printf("The tringle is invalid");
    return 0;
}
