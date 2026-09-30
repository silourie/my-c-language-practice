#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001>nul");

    int choice;

    while(1){
    printf("请输入下列功能对应的标号：\n");
    printf("1 新建文件 2 打开文件 3关闭文件 4 退出文件 5 退出\n");
    scanf("%d",&choice);

    switch (choice){
        case 1:{
            printf("您调用了功能1 新建文件\n");
            printf("下面将转向新建文件功能模块\n");
      ;      break;
        }
        case 2:{
            printf("您调用了功能2 打开文件\n");
            printf("下面将转向打开文件功能模块\n");
            break;
        }
        case 3:{
            printf("您调用了功能3 关闭文件\n");
            printf("下面将转向关闭文件功能模块\n");
            break;
        }
        case 4:{
            printf("您调用了功能4 退出文件\n");
            printf("下面将转向退出文件功能模块\n");
            break;
        }
        case 5:{
            printf("您调用了功能5 退出\n");
            printf("下面将转向退出功能模块\n");
            return 0;
            break;
        }
        default:
            printf("您输入的标号有误。\n");
    }
    }
    return 0;
    
}