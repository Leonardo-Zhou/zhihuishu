//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
对学生成绩（百分制）评等级，规则如下：


[80,100]  为A


[60,79]   为B


[0,59]    为C


输入要求
输入一个整数形式的百分制的成绩（0<=x<=100）。

输出要求
如果该成绩大于等于80则输出A，在60~79之间则输出B，小于60分则输出C。

输入样例
 60

输出样例
 B*/

#include <stdio.h>


int main(){
    int a;
    scanf("%d",&a);
    switch(a/10){
    case 10:case 9:case 8:
        printf("A\n");
        break;
    case 7:case 6:
        printf("B\n");
        break;
    default:
        printf("C\n");
    }
}