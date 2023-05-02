#include <stdio.h>
int main()
{
    int sum;
    int a;
    int dig;
    printf("enter a number :");
    scanf("%d",&a);
    while (a!=0)
    {
        if (a!=0)
            dig=a%10;
            printf("%d",dig);
            printf("\n");
            a=a/10;
    }
    //printf("the sum is :%f",avg);
    return 0;
}