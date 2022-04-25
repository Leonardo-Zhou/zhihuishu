//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
设计函数，对于给定的一个整数n，判断其是否完全数。


如果一个正整数恰好等于它所有的真因子（即除了自身以外的因子）之和，则称之为完全数（又称完美数）。如6=1+2+3，6是一个完全数。


输入要求
主函数中输入一个正整数n。

输出要求
设计函数判断该数是否为完全数。是完全数则在主函数中输出yes，不是完全数则输出no。

输入样例
6

输出样例
yes

模板
*/

#include<stdio.h>
int fac(int a)
{
    int sum = 0;
    for(int i=1;i <a;i++){
        if(!(a%i)){
            sum += i;
        }
    }
    if(sum == a){
        return 1;
    } else {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(  fac(n)  )
    printf("yes\n");
    else printf("no\n");
    return 0;
}