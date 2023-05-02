
#include <stdio.h>
int main()
{
    int sum;
    int a;
    int t;
    int tt;
    printf("enter a number :");
    scanf("%d",&a);
    tt=a;
    while (a!=0)
    {
        if (a!=0)
            t=(a%10);
            sum+=t*t*t;
            a=a/10;
    }
    if (sum==tt)
        printf("it is an armstrong number");
    else
        printf("it is not an armstrong number");
    return 0;
}