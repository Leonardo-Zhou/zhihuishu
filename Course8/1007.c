//
// Created by LeonardoZhou on 2022/4/11.
//

/*题目描述
对用作单位矩阵的数组初始化。单位矩阵在主对角线上的值为1，而其他地方的值为0，并且主对角线上的行、列下标是一样的。

输入要求
输入一个整数n表示矩阵的行数。

输出要求
输出n*n的单位矩阵。数据之间以空格间隔，每行的最后一个数据后面有空格。

输入样例
3

输出样例
1 0 0
0 1 0
0 0 1*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i <n; i++){
        for(int j=0;j<n;j++){
            if(j==i){
                printf("%d ",1);
            } else{
                printf("%d ",0);
            }

        }
        printf("\n");
    }

}