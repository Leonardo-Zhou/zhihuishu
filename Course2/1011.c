//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ten,five,one;
    ten = n/10;
    five = (n%10)/5;
    one = (n%10)%5;
    printf("%d %d %d\n",ten,five,one);
    return 0;
}