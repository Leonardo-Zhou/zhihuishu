//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
编写函数，对于给定的整数n，求n!的值并返回。

输入要求
给定一个正整数n（n≤12）。


输出要求
计算并返回n!的值。


输入样例
5

输出样例
120
*/

#include<stdio.h>

int fact(int a){
    int product = 1;
    for(int i=1;i<=a;i++){
        product*=i;
    }
    return product;
}

int main()
{
    int n,result;
    scanf("%d",&n);
    result=fact(n);
    printf("%d\n",result);
    return 0;
}
