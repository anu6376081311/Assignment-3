#include <stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
if (n&1==1)
    printf("Given number is odd");
    else
        printf("Given number is even");
    return 0;
}
