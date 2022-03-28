//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n=0;
    char c;
    while(1){
        scanf("%c",&c);
        if (c == '\n'){
            break;
        } else{
            if (c>='a' && c<='z' || c >='A' && c<='Z'){
                n++;
            }
        }
    }
    printf("%d\n",n);

}