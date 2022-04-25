//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
编写函数，对于给定的任意两个浮点数，计算并返回平均值。

输入要求
主函数中给定任意两个浮点数。

输出要求
计算并返回平均值。


输入样例
4 5

输出样例
4.50

*/

#include<stdio.h>

float average(double x, double y){
    return (x+y)/2.0;
}

int main()
{
    double x,y;
    double ave;
    scanf("%lf%lf",&x,&y);
    ave=average(x,y);
    printf("%.2f\n",ave);
    return 0;
}