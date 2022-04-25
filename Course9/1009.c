//
// Created by LeonardoZhou on 2022/4/18.
//

/*
 *题目描述
判断[ k1,k2]之间有多少个素数（包含k1和k2），并输出这些素数。 ( 1 <= k1 < k2 <= 1000 )

输入要求
输入两个正整数k1和k2。

输出要求
输出两行信息，第一行是[k1,k2]之间素数个数，第二行输出所有素数。素数之间用空格分开。

输入样例
1 10

输出样例
4
2 3 5 7

提示
最后一个素数的后面直接换行，不需要再加空格。*/

#include <stdio.h>
#include <math.h>

int is_prime(int);

int main(){
    int a,b,temp[10000];
    int num = 0;
    scanf("%d%d",&a,&b);
    for(int i = a;i<=b;i++){
        int flag = is_prime(i);
        if(flag){
            temp[num] = i;
            num+=1;
        }
    }
    printf("%d\n",num);
    for(int i=0; i <num-1;i ++){
        printf("%d ",temp[i]);
    }
    printf("%d\n",temp[num-1]);
}


int is_prime(int num){
    if(num ==0 || num == 1) return 0;
    if(num ==2) return 1;
    for(int i =2;i <= (int)sqrt(num)+1;i++){
        if(num%i ==0){
            return 0;
        }
    }
    return 1;
}
