/*while循环是先判断再执行，即不知道具体需要循环多少次，只知道循环的条件，就可使用while循环
例如需要用户输入密码，但是不知道用户会输错几次。逻辑是：只要密码不对，就让用户一直输下去。*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001>nul");

    int password;
    printf("请输入密码:");
    scanf("%d",&password);

    while (password != 123456){
        printf("密码错误！请重新输入：");
        scanf("%d",&password);
    }
    printf("密码正确，欢迎进入系统！\n");
    return 0;
}