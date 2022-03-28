//
// Created by LeonardoZhou on 2022/3/21.
//

#include <stdio.h>

int main(){
    int n;
    int a;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        if(a%2 ==1){
            printf("0 0\n");
        }else{
            printf("%d %d\n",a/4+a%4/2,a/2);
        }
    }
}