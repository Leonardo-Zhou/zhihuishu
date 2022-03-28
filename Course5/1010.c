//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n;
    while(1){
        int sum=0,temp;
        if((scanf("%d",&n))==EOF){
            break;
        } else{
            for(int i=0; i<n; i++){
                scanf("%d",&temp);
                sum+=temp;
            }
        }
        printf("%d\n",sum);
    }
}