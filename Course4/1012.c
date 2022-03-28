//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int product = 1;
    for(int i=0; i <n; i++){
        product *= (i+1);
    }
    printf("%d\n",product);
}