//
// Created by LeonardoZhou on 2022/4/2.
//

#include <stdio.h>

int main(){
    int n,i=0;
    scanf("%d",&n);
    while (n!=1){
        if(n%2 ==0){
            n/=2;
        }else{
            n=3*n+1;
        }
        i++;
    }
    printf("%d\n",i);
}

