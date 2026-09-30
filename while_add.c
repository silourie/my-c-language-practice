#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001>nul");
int i = 21;
int sum = 0;
printf("计算21-40以内奇数的和\n：");

while(i<=40){
    sum += i;
    printf ("i = %d时\n",i);
    printf ("sum = %d\n",sum);
    i += 2;
}
printf("21-40以内奇数的和为：%d\n",sum);
return 0;
}
