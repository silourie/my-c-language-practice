/*for循环的特点是结构紧凑。即如果你明确知道要循环多少次，或者要处理一组有规律的数据，就可以使用for循环，而且for循环将其点和终点以及步长全写在一行了。
以统计同学们的成绩为例，知道人数，就明确知道要收集几次成绩。*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001>nul");

    int sum = 0;
    int score = 0;
    int n;
    printf("请问一共要统计多少个同学的成绩？");
    scanf("%d",&n);

    printf("好的，我们将统计%d个同学的成绩。\n",n);
    
    for (int i = 1;i<=n;i++){
        printf("请输入第%d个同学的成绩:",i);
        scanf("%d",&score);
        sum +=score;
    }
    printf("所有同学的总成绩是：%d\n",sum);

    double average = 0.0;
    if(n>0){
        average = (double)sum/n;
        printf("班级平均数是：%.2f\n",average);
    }else{
        printf("没有任何同学的成绩可以统计，平均数无法统计。\n");

    }
    return 0;
    
}