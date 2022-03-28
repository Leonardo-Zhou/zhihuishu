//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>

int main(){
//    double nine_zero = 5.14,nine_three = 5.54,nine_seven = 5.90,zero = 5.13;
//    double self_help = 0.95,assistance = 0.98;
    double oil_type[4] = {5.13,5.14,5.54,5.90};
    double type[2] = {0.95,0.98};
    float the_amount_of_fuel;
    int type_of_oil,type_of_service;
    int temp;
    scanf("%f%d%d",&the_amount_of_fuel,&type_of_oil,&type_of_service);
    switch(type_of_oil) {
        case 0:temp = 0;break;
        case 90:temp = 1;break;
        case 93:temp = 2;break;
        case 97:temp = 3;break;
    }
    printf("%.2f\n",the_amount_of_fuel*oil_type[temp]*type[type_of_service-1]);
}