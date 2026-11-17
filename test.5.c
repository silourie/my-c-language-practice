#include<stdio.h>
#include<stdlib.h>

int main(){
    system("chcp 65001>nul");

    int x,y;
    char op;

    printf("请输入两个整数x和y: ");
    scanf("%d %d",&x,&y);

    printf("请输入一个运算符（+，-，*，/）：");
    scanf(" %c",&op);

    switch(op){
        case'+':
        printf("%d+%d=%d\n",x,y,x+y);
        break;
        
        case'-':
        printf("%d-%d=%d\n",x,y,x-y); 
        break;

        case'*':
        printf("%d*%d=%d\n",x,y,x*y);
        break;

        case'/':
        if(y==0){
            printf("除数不能为零！\n");
            return 0;
        }
        printf("%d/%d=%d",x,y,x/y);
        break;

        return 0;
    }


}