//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>
int main(){
    char str[100000];
    scanf("%s",str);
    int digital_amount = 0;
    for(int i =0;i < 100000;i++){
        char temp = str[i];
        if(str[i] == '\n' || str[i] == '\000'){
            break;
        } else if(str[i] >='0' && str[i] <= '9'){
            digital_amount++;
        }
    }
    printf("%d\n",digital_amount);

}