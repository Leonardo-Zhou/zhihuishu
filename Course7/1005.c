//
// Created by LeonardoZhou on 2022/4/2.
//

#include <stdio.h>

int main(){
    char str[100];
    int length=0;
    for(int i=0; i<1000; i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n') {
            length = i;
            break;
        }
    }
    for(int i=0; i<length; i++){
        if(i==0&&'0'<=str[i]&&str[i]<='9'){
            printf("no");
            goto case2;
        }
        if('0'<=str[i]&&str[i]<='9'||'a'<=str[i]&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]=='_'){

        }else{
            printf("no");
            goto case2;
        }
    }
    case1:
        printf("yes");
    case2:
        printf("\n");


}