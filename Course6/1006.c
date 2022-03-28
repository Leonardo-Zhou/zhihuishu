//
// Created by LeonardoZhou on 2022/3/28.
//
#include <stdio.h>
#define N 8

int main(){
    float scores[N];
    float total_score = 0.0f;
    for(int i=0; i<N; i++){
        scanf("%f",&scores[i]);
        total_score += scores[i];
    }
    float max=scores[0],min = scores[0];
    for(int i=0; i<N; i++){
        if(scores[i] > max){
            max=scores[i];
        }
        else if(scores[i] <min){
            min = scores[i];
        }
    }
    total_score-=(max+min);
    printf("%.2f\n",total_score/6.0);


}


