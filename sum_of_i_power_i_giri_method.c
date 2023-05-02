#include <stdio.h>
int main()
{
    int a;
    int sum;
    int t;
    printf("enter a number :");
    scanf("%d",&a);
    for (int i=1;i<=a;i+=1)
    {
        t=1;
        for (int j=1;j<=i;j+=1)
        {
            t=t*i;
        }
        sum+=t;
    }
    printf("the sum is :%d",sum);
    return 0;
}