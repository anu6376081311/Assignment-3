#include<stdio.h>
int main(){
int a,b,c,D;
printf("Enter the value of a,b,c :");
scanf("%d %d %d",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
    printf("Roots are real and distinct");
else if(D<0)
    printf("Roots are imaginary");
else
    printf("Roots are real and equal ");
return 0;
}
