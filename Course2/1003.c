//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    double a,b,h,s;
    scanf("%lf%lf%lf",&a,&b,&h);
    s = (a+b)*h/2;
    printf("%.2lf\n",s);
    return 0;
}