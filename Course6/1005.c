//
// Created by LeonardoZhou on 2022/3/28.
//

#include <stdio.h>

int main(){
    char str[1000];
    char temp;
    int i = 0;
    while(1){
        scanf("%c",&temp);
        if (temp == '\n'){
            break;
        } else{
            str[i] = (temp>='A' && temp<='Z')?temp+32:(temp>='a' && temp<='z')?temp-32:temp;

            printf("%c",str[i]);
            i++;
        }
    }
    printf("\n");

}