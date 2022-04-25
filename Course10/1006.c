//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
设计函数，对于给定的一个整数n（n>1），判断其是否为素数。素数的定义为：一个大于1的整数，如果除了1和其自身以外没有其他正因子，则称此数为素数或质数。

输入要求
主函数中输入一个整数n(n>1)。

输出要求
如果该数是素数则在主函数中输出yes，如果不是就输出no。

输入样例
3

输出样例
yes

模板
*/

#include<stdio.h>
#include<math.h>
int prime(int a)
{
    int mid = (int)sqrt(a)+1;
    if(a==2){
        return 1;
    }
    for(int i=2;i<=mid;i++){
        int flag = a%i;
        if(!flag){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x;
    scanf("%d",&x);
    if( prime(x) ) printf("yes\n");
    else printf("no\n");

    return 0;
}