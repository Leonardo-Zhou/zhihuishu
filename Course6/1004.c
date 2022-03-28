//
// Created by LeonardoZhou on 2022/3/27.
//

#include <stdio.h>
#define N 10
int main(){
    int min,max;
    int a;
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        if(i==0){
            min = a;
            max = a;
        }else{
            if(a>max){
                max=a;
            }else if(a<min){
                min=a;
            }
        }

    }
    printf("%d\n",max);
    printf("%d\n",min);

}