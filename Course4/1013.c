//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n,temp;
    scanf("%d",&n);
    int zero_amount = 0,
        positive_amount = 0,
        negative_amount = 0;
    for(int i=0; i<n; i++){
        scanf(" %d",&temp);
        if(temp == 0){
            zero_amount++;
        } else if(temp >0) {
            positive_amount++;
        }else{
            negative_amount++;
        }
    }
    printf("%d\n%d\n%d\n",positive_amount,negative_amount,zero_amount);

}