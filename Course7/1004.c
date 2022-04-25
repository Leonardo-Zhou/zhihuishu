//
// Created by LeonardoZhou on 2022/4/2.
//

#include <stdio.h>

int main(){
    char str[1000];
    int letter_count[100] = {0};
    int length=0;
    for(int i=0; i<1000; i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n') {
            length = i;
            break;
        }
        if (str[i] <='z' && str[i]>='a'){
            str[i]-=32;
        }
        letter_count[str[i]]++;
    }

    for(int i=65;i<91;i++){
        if (letter_count[i]!=0){
            printf("\'%c\':%d\n",i,letter_count[i]);
        }
    }
}

