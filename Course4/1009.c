//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>
#include <math.h>

int main(){
    int n,sum = 0;
    scanf("%d",&n);
    for(int i=0; i <n; i++){
        sum += (i+1)* pow(-1,i);
    }
    printf("%d\n",sum);
}