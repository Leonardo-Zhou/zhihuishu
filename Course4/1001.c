//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=0; i<n; i++){
        int temp = 0;
        scanf("%d",&temp);
        sum += temp;
    }
    printf("%d\n",sum);
}
