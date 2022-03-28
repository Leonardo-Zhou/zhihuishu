//
// Created by LeonardoZhou on 2022/3/14.
//

#include <stdio.h>

int main(){
    char temp;
    int letter = 0,digital = 0,blank = 0,other = 0;
    while ((void *) scanf("%c", &temp) != NULL && temp != '\n'){
        if(temp == ' '){
            blank++;
        } else if(temp <='9' && temp >= '0'){
            digital++;
        } else if(temp >='a' && temp <='z' || temp >='A' && temp <='Z'){
            letter++;
        } else {
            other++;
        }
    }
    printf("%d %d %d %d\n",letter,digital,blank,other);
}