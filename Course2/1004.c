//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    float x,y,sum;
    float cost_normal=0.538,cost_ab = 0.03;
    scanf("%f%f",&x,&y);
    sum = cost_normal*x+cost_ab*y;
    printf("%.2f\n",sum);
    return 0;
}