//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n,a;
    int sum=0;
    int temp;
    scanf("%d%d",&n,&a);
    for(int i=1;i<n+1;i++){
        temp=a;
        for(int j=1;j<i;j++){
            temp = temp*10+a;
        }
        sum+=temp;
    }
    printf("%d\n",sum);
}