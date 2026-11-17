#include<stdio.h>
#include<stdlib.h>

int main(){
    system("chcp 65001>nul");
    int year;
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||year%400==0)
    printf("是闰年");
    else  printf("不是闰年");
    return 0;
}
