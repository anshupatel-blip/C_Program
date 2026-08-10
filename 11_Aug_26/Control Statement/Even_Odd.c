#include<stdio.h>

int main()
{

    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x % 2 ==0)
    { printf("The number is Even");
        /* code */
    }
    if (x % 2 != 0)
    {
        printf("The number is Odd");
    }
    
    return 0;
}