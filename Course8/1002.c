//
// Created by LeonardoZhou on 2022/4/11.
//

#include <stdio.h>
#include <string.h>


int main(){
    char string[1000];
    gets(string);

    int count[10] = {0};
    for(int i=0;i < strlen(string);i++){
        if(string[i]>='0' &&string[i]<='9'){
            count[string[i]-48] ++;
        }
    }
    for(int i=0;i < 10;i++){
        if(count[i] !=0){
            printf("%d:%d\n",i,count[i]);
        }
    }
}