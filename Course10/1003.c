//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
编写函数，计算y=f(x)=2x^2+1。

输入要求
主函数中输入一个浮点数x。


输出要求
计算并返回y的值。


输入样例
3

输出样例
19.00*/

#include<stdio.h>

float f(double x){
    return 2.0*x*x+1.0;
}

int main()
{
    double x,y;
    scanf("%lf",&x);
    y=f(x);
    printf("%.2f\n",y);
    return 0;
}
