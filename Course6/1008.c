//
// Created by LeonardoZhou on 2022/3/28.
//

#include <stdio.h>
#define N 100

int main(){
    char str[100],temp;
    int num;
    for(int i=0; i <N; i++){
        scanf("%c",&temp);
        if(temp == '\n') break;
        str[i] = temp;
        num = i;
    }
    for(int i=0; i <num+1; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}