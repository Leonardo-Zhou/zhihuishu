//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a<='Z' && a >= 'A'){
        printf("upper\n");
    }else if(a>='a' && a <= 'z'){
        printf("lower\n");
    }else if(a>='0' && a <='9'){
        printf("digit\n");
    } else{
        printf("other\n");
    }
}
