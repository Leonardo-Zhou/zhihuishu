//
// Created by LeonardoZhou on 2022/4/18.
//

/*
题目描述
从键盘输入任意两个整数a和b，计算并输出a+b的值。

输入要求
从键盘输入两个整数a和b。

输出要求
输出这两个整数的和。

输入样例
21 33

输出样例
54

提示
最后一个数据输出后必须换行。*/

#include <stdio.h>


int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    return 0;
}