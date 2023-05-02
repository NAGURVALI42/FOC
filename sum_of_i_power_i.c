#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int sum;
    printf("enter a number :");
    scanf("%d",&a);
    for (int i=1;i<=a;i+=1)
    {
        sum+=pow(i,i);
    }
    printf("the sum is :%d",sum);
    return 0;
}