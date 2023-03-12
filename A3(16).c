#include<stdio.h>
int main()
{
    char n;
    printf("Enter a number :");
    scanf("%c",&n);
    if(n>=65 && n<=90)
    {
        printf("The given number is in uppercase");
    }
    else if(n>=97 && n<=122)
    {
        printf("The given number is in lower case");
    }
    else if(n>=30 && n<=39)
    {
        printf("The given number is a digit");
    }
    else
    {
        printf("The given number is a special character");
    }

    return 0;
}
