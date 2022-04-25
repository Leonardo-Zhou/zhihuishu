//
// Created by LeonardoZhou on 2022/4/2.
//

#include <stdio.h>
#define N 10

int main(){
    int score[N];
    for(int i=0; i<N; i++){
        scanf("%d",&score[i]);
    }
    int max=score[0],min=score[0];
    int max_pos=0,min_pos=0;
    for(int i=1; i<N; i++){
        if(max<score[i]){
            max=score[i];
            max_pos=i;
        }
        else if(min>score[i]) {
            min=score[i];
            min_pos=i;
        }
    }
    printf("%d %d\n",max,max_pos);
    printf("%d %d\n",min,min_pos);


}