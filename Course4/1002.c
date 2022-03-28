//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int sum = 0,flag = 1,i=0;
    while(flag){
        int temp = 0;
        scanf("%d",&temp);
        if(temp<0){
            flag = 0;
        } else {
            sum += temp;
            i+=1;
        }
    }
    printf("%.1f\n",(float)sum/(float)i);
}
