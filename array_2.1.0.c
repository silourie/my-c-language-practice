/*这是一个二维的冒泡排序算法*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    system ("chcp 65001>nul");

    int a[2][3];
    int i,j,k,t;

    printf("请输入6个无序整数\n");
    for(int i=0;i<2;i++)
    for(int j=0;j<3;j++){
        printf("请输入第%d个整数\n",i*3+j+1);
        scanf("%d",&a[i][j]);
    }
    printf("\n");

    for(i=0;i<2;i++){
    for(j=0;j<3;j++)
    for(k=0;k<3-j;k++)
        if(a[i][k]>a[i][k+1]){
            t=a[i][k];
            a[i][k]=a[i][k+1];
            a[i][k+1]=t;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}