//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>
#include <math.h>

int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=1; i<n+1; i++){
        for(int j=0;j<i-1;j++){
            printf("%-4d",i*(j+1));
        }
        printf("%d\n",i*i);

    }
}