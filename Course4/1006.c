//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n,result = 0,remainder = 0;
    scanf("%d",&n);
    while(n != 0){
        remainder = n % 10;
        n = n /10;
        result +=remainder;
    }
    printf("%d\n",result);
}