//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);

    printf("PRC form:%d/%d/%d\n",year,month,day);
    printf("UK form:%d/%d/%d\n",day,month,year);
    printf("USA form:%d/%d/%d\n",month,day,year);
    return 0;

}