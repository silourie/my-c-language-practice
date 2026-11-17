#include<stdio.h>

int main(){
    int n;
    float s = 0.0;

    printf("input n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        s += 1.0/i;
    }
    printf("s = %.2f\n",s);
    return 0;
}