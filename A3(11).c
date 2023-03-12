#include <stdio.h>
int main(){
int E,H,M,P,C;
printf("Enter the marks :");
scanf("%d %d %d %d %d",&E,&H,&M,&P,&C);
if(E>=33 && H>=33 && M>=33 && P>=33 && C>=33)
    printf("The candidate  passed the examination");
    else
        printf("The candidate failed");
    return 0;
}
