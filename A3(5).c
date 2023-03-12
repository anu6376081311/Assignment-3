#include <stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
if(n>99 && n<1000)
    printf("The given number have three digits");
    else
        printf("The given number have not three digits");
    return 0;
}
