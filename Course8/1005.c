//
// Created by LeonardoZhou on 2022/4/11.
//

#include <stdio.h>
#define N 10

int main(){
    int score[N];
    for(int i=0; i<N; i++){
        scanf("%d",&score[i]);
    }

    for(int i=0; i<N; i++){
        for(int j=i;j<N; j++){
            if (score[j]>score[i]){
                int temp = score[j];
                score[j] = score[i];
                score[i] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%d ",score[i]);
    }
    printf("\n");
}