//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
设计函数，对于给定的任意两个整数，计算并返回最大值。


输入要求
主函数中输入两个整数。

输出要求
设计函数计算并返回最大值。


输入样例
87 65

输出样例
87

模板

*/

#include<stdio.h>

int max(int a, int b){
    return a>b?a:b;
}


int main()
{
    int x,y,m;
    scanf("%d%d",&x,&y);
    m=max(x,y);  //调用求两数最大值的函数函数
    printf("%d\n",m);  //输出最大值m
    return 0;
}