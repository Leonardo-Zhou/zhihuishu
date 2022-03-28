//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int rabbit= 0,chicken = 0;
    int flag = 1;
    while(flag) {
        chicken = m-rabbit;
        if ((rabbit*4 + chicken*2)==n) {
            flag = 0;
        }
        rabbit++;
    }
    printf("%d %d\n",chicken,rabbit-1);
    return 0;
}