#include <stdio.h>

int main() 
{
    int num;
    
    printf("enter the number :");
    scanf("%d",&num);
    printf("the num is :\n");
    for (int i=1;i<=num;i+=1)
    {
        printf("%d\n",i);
    }
    return 0;
}
