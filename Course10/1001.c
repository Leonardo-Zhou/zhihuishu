//
// Created by LeonardoZhou on 2022/4/25.
//

/*题目描述
设计函数，对于给定的任意一个字符，判断它是否大写字母，若是大写字母则将其转换成对应的小写字母并返回；若不是大写字母，则保持原样。


输入要求
主函数中输入一个字符。


输出要求
设计函数对该字符进行处理，如果是大写字母，则返回其对应的小写字母。如果是小写字母或其它字符，则保持原样返回。


输入样例
A

输出样例
a*/

#include<stdio.h>

char trans(char c){
    return c>='A' && c<='Z' ? c+32:c;
}

int main()
{
    char c;
    scanf("%c",&c);
    c=trans(c);   //调用函数
    printf("%c\n",c);
    return 0;
}
