#include<stdio.h>

int main(){

    float x;
    scanf("%d",&x);
    int y = x;
    printf("The integer number is :%d\n",y);
    float z = x-y;
    printf("The fractional part is :%f",z);
    return 0;
}