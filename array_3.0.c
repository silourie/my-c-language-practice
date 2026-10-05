#include <stdio.h>
#include <stdlib.h>

int main(){

    system("chcp 65001>nui");

    int a[6];
    int i,j,t;

    printf("请输入六个无序整数\n");

    for(int i=0;i<6;i++){
        printf("请输入%d个整数：\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0;i<6;i++){
        for(j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("排序后的数为：\n");
    for(i=0;i<6;i++)
    printf("%d",a[i]);
    return 0;
}