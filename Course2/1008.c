//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    char str[4];
    scanf("%s",&str);
    int sum = 0;
    for (int i = 0; i < 3;i++) {
        printf("%c ",str[i]);
        sum += str[i]-48;
    }
    printf("%c\n",str[3]);
    sum += str[3]-48;
    printf("%d\n",sum);
    return 0;

}