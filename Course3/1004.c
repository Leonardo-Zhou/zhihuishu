//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>
#include <math.h>

int main(){
    double x;
    scanf("%lf",&x);
    if(x < 0){
        printf("%.2f\n",pow((x+1),2)+2*x+1/x);
    }
    else{
        printf("%.2f\n",pow(x,0.5));
    }
}