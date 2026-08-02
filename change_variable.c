/*这个code用于学习交换变量的做法。以交换两杯饮料为例。*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int a = 10; //这是第一杯水
    int b = 20; //这是第二杯水
    int temp; //这是一个空杯子，用于交换变量的中转。

    printf("交换前:a=%d,b=%d\n",a,b);
    
    //开始交换，注意观察！
    temp = a; //第一步，先把第一个杯子里的饮料导入空杯子中。
    a = b; //第二步，把第二个杯子里的饮料倒入第二个杯子里。
    b = temp; //最后把空杯子中的饮料倒入第二个杯子中。

    printf("交换后:a=%d,b=%d\n",a,b);

    return 0;


} 