//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n,score,failed_num=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&score);
        if(score<60){
            failed_num++;
        }
        sum +=score;
    }
    printf("%.1f\n",(float)sum/(float)n);
    printf("%d\n",failed_num);
}