#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 22;
    int sum = 0;
    do{
        sum += i;
        i += 2;
    }while(i <= 40);
    printf("The sum of odd numbers from 21 to 40 is:%d\n",sum);
    return 0;
}