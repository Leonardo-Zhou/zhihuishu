//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
输入一个字符串，其中只能包括数字或字母。对应输入的字符串,输出它的类型。如果是仅由数字构成的那么输出digit，如果是仅由字母构成的那么输出character,如果是由数字和字母一起构成的输出mixed。

输入要求
输入一个字符串，长度不超过1000，且字符串中只包括数字或大、小写字母。

输出要求
输出对应的类型。

输入样例
Sun2009

输出样例
mixed*/

#include <stdio.h>
#include <string.h>


int main(){
    char buf[1024];
    gets(buf);
    int digit = 0,letter = 0;
    for(int i=0;i <strlen(buf);i++){
        if(buf[i] >= 48 && buf[i] <= 57){
            digit = 1;
        }else{
            letter = 1;
        }
    }
    if(digit && letter) printf("mixed\n");
    else if(digit && (!letter)) printf("digit\n");
    else printf("character\n");
}