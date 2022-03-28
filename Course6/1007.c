//
// Created by LeonardoZhou on 2022/3/28.
//

#include <stdio.h>
#include <math.h>
int if_prime_number(int);

int main(){
    int start,stop;
    int prime[1000],m = 0;
    scanf("%d%d",&start,&stop);
    for(int j=start; j<stop+1; j++){
        if(if_prime_number(j)){
            prime[m] = j;
            m ++;
        }
    }
    printf("%d\n",m);
    for(int i =0;i <m-1;i ++){
        printf("%d ",prime[i]);
    }
    printf("%d\n",prime[m-1]);
}


int if_prime_number(int a){
    for(int i=2;i<= sqrt(a)+1;i++){
        if(a==1) return 0;
        if(a==2) return 1;
        if(a%i==0) return 0;
    }
    return 1;
}