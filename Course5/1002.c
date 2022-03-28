//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n;
    double sum=0.0f;
    scanf("%d",&n);
    for(int i=1; i <n+1; i++){
        sum += (float)1/(float)i;
    }
    printf("%.6lf\n",sum);
}