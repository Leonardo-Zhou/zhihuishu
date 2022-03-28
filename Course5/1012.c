//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int all_length = 2*n-1;
    for(int i=1; i<n+1; i++){
        for (int j = 0; j < (all_length-2*i+1)/2; ++j) {
            printf(" ");
        }
        for(int j=1;j<i+1;j++){
            printf("%c ",i+64);
        }
        printf("\n");

    }
}

