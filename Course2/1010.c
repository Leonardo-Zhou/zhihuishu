//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    char num[5];
    scanf("%s",&num);
    for (int i = 0; i < 4; ++i) {
        num[i] = (num[i]-48+9)%10+48;
    }
    char temp1,temp2;
    temp1 = num[0];temp2 = num[1];
    num[0] = num[2];num[1] =num[3];
    num[2] = temp1; num[3] = temp2;
    printf("%s\n",num);
    return 0;
}