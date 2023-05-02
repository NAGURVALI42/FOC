#include <stdio.h>
int main()
{
    int sum;
    int a;
    float avg;
    printf("enter a number :");
    scanf("%d",&a);
    for (int i=1;i<=a;i+=1)
    {
        sum+=i;
    }
    avg=sum/a;
    printf("the sum is :%f",avg);
    return 0;
}