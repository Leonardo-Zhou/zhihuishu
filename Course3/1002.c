//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>

int main(){
    int grade;
    scanf("%d",&grade);
    if(grade < 60){
        printf("C\n");
    } else if(grade < 80 && grade >= 60){
        printf("B\n");
    } else{
        printf("A\n");
    }

}