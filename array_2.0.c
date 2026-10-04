/*这是一个用于学习数组的程序。查找数组中的最大值和最小值。*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10

int main(){
    system("chcp 65001>nul");

    int scores[MAX_STUDENTS];
    int max = 0;
    int min = 0;

    printf("请输入%d个学生的成绩：\n",MAX_STUDENTS);

    for(int i = 0;i<MAX_STUDENTS;i++){
        printf("请输入第%d个学生的成绩：",i+1);
        scanf("%d",&scores[i]);
    }
    max = min =scores[0];
    for(int i = 0;i<MAX_STUDENTS;i++){
        if(scores[i]>max){
            max = scores[i];
        }
        if(scores[i]<min){
            min = scores[i];
        }
    }
    printf("最大成绩是：%d\n",max);
    printf("最小成绩是：%d\n",min);
    return 0;
}