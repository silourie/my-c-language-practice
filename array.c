/*这是一个用于学习数组的程序。以计算学生的总成绩和平均成绩为例。*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 5

int main(){ 
    system("chcp 65001>nul");

    int scores [MAX_STUDENTS];
    int total = 0;
    float averageScore;

    printf("请输入每个学生的成绩：\n");
    for(int i = 0;i<MAX_STUDENTS;i++){
        printf("请输入第%d个学生的成绩：",i+1);
        scanf("%d",&scores[i]);
        total +=scores[i];
        averageScore = (float)total/MAX_STUDENTS;
    }
    printf("总成绩是：%d\n",total);
    printf("平均成绩是：%4.2f\n",averageScore);
    return 0;
}