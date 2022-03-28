//
// Created by LeonardoZhou on 2022/3/7.
//
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch(a%2){
        case 1:printf("odd\n");break;
        case 0:printf("even\n");break;
    }
}
