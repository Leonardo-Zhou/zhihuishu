//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float sum = 0.0f;
    for(int i=0; i<n; i++){
        sum += 1.0/(float)(2*i+1);
    }
    printf("%.2f\n",sum);
}