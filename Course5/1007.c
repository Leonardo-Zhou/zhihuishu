//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int type,num;
    int sum[2]={0,0},a;
    while(1){
        scanf("%d%d",&type,&num);
        if(type ==0&&num==0){
            if(sum[0]!=sum[1]){
                printf("%d %d\n",(sum[0]>sum[1])?1:2,(sum[0]>sum[1])?sum[0]:sum[1]);

            }else{
                printf("equal\n");
            }
            break;
        }else{
            sum[type-1]+=num;
        }
    }
}