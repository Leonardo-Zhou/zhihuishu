//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
设计函数，计算两个整数的最大公约数。


输入要求
主函数中输入两个整数。


输出要求
设计函数计算最大公约数，并在主函数中进行输出。


输入样例
6 8

输出样例
The gcd of 6 and 8 is 2

模板
*/

#include<stdio.h>
int gcd(int x, int y) {
    int min = x>y?y:x;
    int gcd = 1;
    for (int i=1;i<=min;i++){
        if ((!(x%i))&&(!(y%i))){
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int a,b;
    int g;
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("The gcd of %d and %d is %d\n",a,b,g);
    return 0;
}