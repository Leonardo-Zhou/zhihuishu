//
// Created by LeonardoZhou on 2022/4/2.
//

#include <stdio.h>

int main(){
    char str[1000],a;
    int length=0;
    for(int i=0; i<1000; i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n') {
            length = i;
            break;
        }
    }
    scanf("%c",&a);
    int count=0;
    for(int i =0; i <=length; i++){
        if (str[i] == a){
            count++;
        }
    }
    printf("%d\n",count);
}

