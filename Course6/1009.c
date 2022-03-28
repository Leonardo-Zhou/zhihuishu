//
// Created by LeonardoZhou on 2022/3/28.
//

#include <stdio.h>

int in(char,char*,int);
int main(){
    char vowel[] = {'a','e','i','o','u'};
    char temp;
    int num=0;
    while(1){
        scanf("%c",&temp);
        if(temp == '\n') break;
        if(in(temp, vowel,5)) num++;
    }
    printf("%d\n",num);
}


int in(char c,char *vowel,int n){
    char *temp = vowel;
    for(int i=0;i<n;i++){
        if(c == temp[i]) return 1;
    }
    return 0;
}