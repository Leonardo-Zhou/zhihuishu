//
// Created by LeonardoZhou on 2022/4/18.
//

/*输入要求
输入一个浮点数表示某人本月的计税依据


输出要求
输出本月应交的个人所得税，保留2位小数。


输入样例
12000

输出样例
tax=1145.00*/


#include <stdio.h>

int main(){
    double rate[7] = {0.03,0.1,0.2,0.25,0.3,0.35,0.45};
    int sub_num[7] ={0,105,555,1005,2755,5505,13505};
    int class[8] = {0,1500,4500,9000,35000,55000,80000,2147483647};

    float n;
    scanf("%f",&n);
    n = n - 3500;
    if(n<=class[0]){
        printf("tax=0.00\n");
    }
    for(int i=0;i <7; i++){
        if(n>class[i]&&n<=class[i+1]){
            printf("tax=%.2f\n",n*rate[i]-sub_num[i]);
            break;
        }
    }
}