//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
依然是计算多组a+b的值，不过这次会明确告诉你一共有N组数据。

输入要求
第一行包含一个整数N，表示有N组数据。接下来的N行，每行输入两个整数a和b。

输出要求
对于每一组整数a和b，计算并输出a+b的值。

输入样例
5
1 5
10 20
67 90
0 0
11 23

输出样例
6
30
157
0
34

提示
每输入一对a和b，回车后得到一个求和结果，每行只输出一个结果。最后一个求和数据输出后也要换行。*/
#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i <n; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
}