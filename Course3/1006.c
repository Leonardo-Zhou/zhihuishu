//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a%4 == 0 && a % 100 != 0 || a % 400 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

}