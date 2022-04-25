//
// Created by LeonardoZhou on 2022/4/11.
//

#include <stdio.h>
#include <string.h>

int main(){
    char num[100];
    int flag = 0;
    gets(num);
    for(int i=0;i <strlen(num);i++){
        if(num[strlen(num)-1-i] != num[i]){
            printf("No\n");
            flag = 1;
            goto case1;
        }
    }
    case1:
    if(!flag){
        printf("Yes\n");
    }
}