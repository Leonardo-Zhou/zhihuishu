//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    char str[2];
    scanf("%s",str);
    for(int i=0;i<2;i++) {
        str[i] += 3;
    }
    printf("%s\n",str);
    return 0;
}