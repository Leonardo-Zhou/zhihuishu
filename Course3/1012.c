//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a>='A' && a <= 'Z') {
        printf("%c\n", a + 32);
    }else if(a>='a' && a <= 'z') {
        printf("%c\n",a-32);
    }else{
        printf("%c\n",a);
    }
}