/*
 *这个程序用于计算找零金额
*/ 


#include <stdio.h>

int main()
{
	int amount = 0;
	int price = 0;
	
	printf("请输入商品金额（元）：");
	scanf("%d",&price);
	
	printf("请输入支付金额（元）；");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("找您%d元。\n",change);
	
	return 0;
 } 
