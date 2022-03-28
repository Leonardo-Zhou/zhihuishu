//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float molecular = 2.0f,denominator = 1.0f,sum = 0.0f,temp;
    for(int i=0; i <n; i++){
        sum += molecular/denominator;
        temp = denominator;
        denominator = molecular;
        molecular +=temp;
    }
    printf("%.6f\n",sum);
}