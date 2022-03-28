//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int a,b;
    while(1){
        scanf("%d %d\n",&a,&b);
        if(a==0 &&b==0){
            break;
        }else{
            printf("%d\n",a+b);
        }
    }
}