//
// Created by LeonardoZhou on 2022/3/27.
//

#include <stdio.h>

int main(){
    int a[10];
    for(int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("%d ",a[9-i]);
    }
    printf("\n");
}