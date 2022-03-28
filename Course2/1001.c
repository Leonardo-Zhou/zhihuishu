//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    char str[3] = {0};
    int num;
    scanf("%s",str);
    for(int i = 2; i >0;i--){
        printf("%c ",str[i]);
    }
    printf("%c",str[0]);
    printf("\n");
    return 0;
}