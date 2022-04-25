//
// Created by LeonardoZhou on 2022/4/11.
//

#include <stdio.h>

int main(){
    int num=0;
    scanf("%d",&num);
    int status[101] = {0};
    for(int i=1; i <= num; i++){
        status[i] =1;
    }
    for(int i=1; i <= num; i++){
        for(int j=1; j <= num; j++){
            if(j%i==0){
                status[j] = !status[j];
            }
        }
    }
    int count = 0;
    int temp[100];
    for(int i=1; i <= num; i++){
        if(status[i]==0){
            count++;
            temp[count] = i;
        }
    }
    printf("%d\n",count);
    for(int i=1;i<count+1;i++){
        printf("%4d",temp[i]);
    }
    printf("\n");

}