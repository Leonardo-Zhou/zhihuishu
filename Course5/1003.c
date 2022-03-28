//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    double sum=0.0f;
    for(int i=1;i<n+1;i++){
        sum += (double)pow(-1,i+1)/(double)pow(2,i-1);
    }
    printf("%.2f\n",sum);
}