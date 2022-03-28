//
// Created by LeonardoZhou on 2022/2/22.
//

#include<stdio.h>

int main(){
       double exchangeRate = 6.5573;
       float dollarAmount;
       scanf("%f",&dollarAmount);
       printf("%.2f\n",exchangeRate*dollarAmount);
       return 0;
}