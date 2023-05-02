#include <stdio.h>
int main()
{
    int fact=1;
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    for (int i=1;i<=a;i+=1)
    {
        fact*=i;
    }
    printf("the sum is :%d",fact);
    return 0;
}