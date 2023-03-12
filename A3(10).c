#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter the value of cp and sp:");
    scanf("%d %d",&cp,&sp);
    if(sp>cp)
    {
        p=(sp-cp)*100/cp;
        printf("The profit is %d",p);
    }
    else
    {
        l=(cp-sp)*100/cp;
        printf("The loss is %d",l);
    }
    return 0;
}
