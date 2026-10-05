/*定义了一个整数组crewAges来储存船员的年龄，数组的大小为MAX_CREW_SIZE,然后输入每个船员的年龄并输出相关信息。*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_CREW_SIZE 10
int main(){
    system ("chcp 65001>nul");

    int crewAges[MAX_CREW_SIZE];
    int crewSize;

    printf("请输入船员人数（最多%d人）",MAX_CREW_SIZE);
    scanf("%d",&crewSize);

    printf("请依次输入船员的年龄\n");
    for(int i=0;i<crewSize;i++){
        printf("船员%d的年龄\n",i+1);
        scanf("%d",&crewAges[i]);
    }
    printf("船员年龄列表：\n");
    for(int i=0;i<crewSize;i++){
        printf("船员%d的年龄：%d\n",i+1,crewAges[i]);
    }
    return 0;
}