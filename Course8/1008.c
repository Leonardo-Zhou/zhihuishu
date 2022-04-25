//
// Created by LeonardoZhou on 2022/4/11.
//

/*
题目描述
从键盘输入一个整数n，然后输入n*n个数据建立一个方阵，计算并输出方阵主对角线元素的和。

输入要求
先输入一个整数n表示方阵的维数。接着输入n*n个数据形成一个方阵

输出要求
方阵主对角线元素之和。

输入样例
3
1 2 4
-1 5 6
3 3 9

输出样例
15
 */

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temp[n][n];
    for(int i=0;i<n; i++){
        for(int j=0;j<n;j++){
            scanf("%d",&temp[i][j]);
        }
    }
    int sum = 0;
    for(int i=0;i<n; i++){
        sum+=temp[i][i];
    }
    printf("%d\n",sum);
}