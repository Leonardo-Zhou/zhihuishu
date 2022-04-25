//
// Created by LeonardoZhou on 2022/4/2.
//

#include <stdio.h>

int main(){
    int n;
    int b[10];
    int i=0;
    scanf("%d",&n);
    while(1){
        if(n/8 !=0){
            b[i] = n%8;
            n=n/8;
            i+=1;
        }else{
            b[i] = n;
            break;
        }
    }
    for(int j=i;j>=0;j--){
        printf("%d ",b[j]);
    }
    printf("\n");
}