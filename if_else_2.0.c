#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001>nul");

    int price = 0;
    int money = 0;

    printf("请输入商品价格：");
    scanf("%d",&price);

    printf("请输入实际支付金额：");
    scanf("%d",&money);
    if(price < 0||money < 0){
        printf("错误：金额不能为负数。\n");
        return 1;
    }
    int diff = money - price;

    if(diff > 0){
        printf("找您%d元，欢迎下次光临。\n",diff);
    }
    else if(diff < 0){
        printf("支付金额不足，还欠%d元。\n",-diff);
    }
    else{
        printf("交易完成，谢谢惠顾。\n");
    }
    return 0;
}