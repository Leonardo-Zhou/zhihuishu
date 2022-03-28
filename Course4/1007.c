//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum_odd = 0,sum_even = 0,temp;
    for(int i=0; i<n; i++){
        scanf(" %d",&temp);
        if( temp%2 ==0){
            sum_even +=temp;
        }else{
            sum_odd += temp;
        }
    }
    printf("%d\n%d\n",sum_odd,sum_even);

}