#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001>nul");
    
    int hour1, minute1;
    int hour2, minute2;

    printf("请输入第一个时刻:");
    scanf("%d,%d",&hour1, &minute1);

    printf("请输入第二个时刻:");
    scanf("%d,%d",&hour2, &minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;

    if ( im < 0 ){
        im = 60 + im;
        ih --;
    }
    printf("时差是%d小时%d分钟\n",ih,im);

}