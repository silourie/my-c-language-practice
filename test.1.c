#include<stdio.h>

int main(){
    float x,y = 0.0;
    scanf("%f",&x);

    if(x<0)
    y = x + 1;
    else if(x>=0&&x<10)
    y = 2*x-1;
    else y=3*x+5;

    printf("%.2f",y);
    return 0;
}