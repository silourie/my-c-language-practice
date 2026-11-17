#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001>nul");

    int sum = 0;
    int score = 0;
    int n;
    int max_score = 0,min_score = 100;
    printf("请问一共要统计多少个同学的成绩？");
    scanf("%d",&n);

    printf("好的，我们将统计%d个同学的成绩。\n",n);
    
    for (int i = 1;i<=n;i++){
        printf("请输入第%d个同学的成绩:",i);
        scanf("%d",&score);

        if(score<0||score>100){
            printf("输入的成绩不在有效范围内（0-100）！\n");
            return 0;
        }

        sum +=score;;
        if(max_score<score)
            max_score=score;
        if(min_score>score)
            min_score=score;
    }
    printf("所有同学的总成绩是：%d\n",sum);
    printf("最高成绩是：%d\n",max_score);
    printf("最低成绩是：%d\n",min_score);

    double average = 0.0;
    if(n>0){
        average = (double)sum/n;
        printf("班级平均数是：%.2f\n",average);
    }else{
        printf("没有任何同学的成绩可以统计，平均数无法统计。\n");

    }
    return 0;
    
}