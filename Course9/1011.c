//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
CoCo和Tom比谁的记性好，这次的比试项目是数字提取。由裁判Mary读出一串字符，CoCo和Tom快速将该字符串中出现过的数字按顺序提取出来并记录在纸上，由Mary来比对谁写的正确。你能编写一个程序，模拟这个数字提取的过程吗？

输入要求
从键盘输入一个字符串，以换行符结束，输入不多于1000个字符。保证输入中至少有一个数字。

输出要求
输出字符串中的全部数字

输入样例
his5is3a3245string14including11number12s

输出样例
533245141112*/

#include <stdio.h>
#include <string.h>


int main(){
    char s[1024];
    gets(s);
    for(int i=0;i< strlen(s);i++){
        if (s[i] >=48 && s[i] <= 57){
            printf("%c",s[i]);
        }
    }
    printf("\n");

}