//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int time[3] = {4,3,1};
    int sum=0;
    int type,num;
    for (int i=1;i<4;i++){
        scanf("%d%d",&type,&num);
        sum += num*time[type];
    }
    printf("%d\n",sum);

}