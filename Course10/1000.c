//
// Created by LeonardoZhou on 2022/4/25.
//

#include <stdio.h>

/*题目描述
设计函数，实现两整数相加的功能。

输入要求
主函数中输入两个整数a和b。

输出要求
设计函数计算并返回a+b的值。


输入样例
15 24

输出样例
15+24=39*/
#include<stdio.h>

int add(int a,int b){
    return a+b;
}


int main()
{
    int x,y,sum;
    scanf("%d%d",&x,&y);
    sum=add(x,y);  //调用函数求两数和
    printf("%d+%d=%d\n",x,y,sum);
    return 0;
}