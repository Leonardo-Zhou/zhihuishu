//
// Created by LeonardoZhou on 2022/3/27.
//

#include <stdio.h>

int main(){
    int a[10];
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int num,temp = 10;
    scanf("%d",&num);
    for(int i=0; i<10; i++){
        if(a[i] == num){
            printf("%d\n",i);
            temp = i;
            break;
        }
    }
    if(temp == 10){
        printf("not found\n");
    }
}