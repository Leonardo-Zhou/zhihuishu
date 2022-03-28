//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    float distance,speed,distance_per_liter,price_per_liter;
    float time,money;
    scanf("%f%f%f%f",&distance,&speed,&distance_per_liter,&price_per_liter);
    time = distance/speed;
    money = distance/distance_per_liter*price_per_liter;
    printf("%.1f %.1f\n",time,money);
    return 0;
}