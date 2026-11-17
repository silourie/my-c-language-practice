#include<stdio.h>

int main(){
    int n;
    int result = 1;

    printf("input n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        result*=(i+1);
    } 
    printf("result = %d\n",result);
    return 0;
}