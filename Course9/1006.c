//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
输入一个正整数表示一个星期中的某一天，若此数字在[1,7]内，则输出对应英文星期名，否则表示输入错误。例如，输入2，则输出“Tuesday”；输入7，则输出“Sunday”；输入非法数值16，则输出“Illegal day”。（输出不包括双引号）

输入要求
输入一个正整数。

输出要求
输出这一天对应的英文星期名。

输入样例
2

输出样例
Tuesday

提示
数字1~7分别对应：Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。

*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char days[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(n>0 && n<8)
    printf("%s\n",days[n-1]);
    else printf("Illegal day\n");
}