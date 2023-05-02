
#include <stdio.h>
int main()
{
    int sum;
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    while (a!=0)
    {
        if (a!=0)
            sum+=a%10;
            a=a/10;
    }
    printf("the sum is :%d",sum);
    return 0;
}