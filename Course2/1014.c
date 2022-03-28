//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    int unitary,pentagon,corner;
    scanf("%d%d%d",&unitary,&pentagon,&corner);
    corner += 5*pentagon;
    unitary += corner /10;corner %= 10;
    printf("Dollars=%d\nChange=%d\n",unitary,corner*10);
    return 0;
}