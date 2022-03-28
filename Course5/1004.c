//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int a;
    float sum=0.0f;
    int n=0;
    while(1){
        if(scanf("%d",&a)==EOF){
            printf("%.2f\n",sum/n);
            break;
        }else{
            sum+=a;
            n+=1;
        }
    }
}