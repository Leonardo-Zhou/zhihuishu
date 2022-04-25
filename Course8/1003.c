//
// Created by LeonardoZhou on 2022/4/11.
//

#include <stdio.h>
#include <string.h>

int main(){
    char name[2][100];
    gets(name[0]);
    gets(name[1]);
    while(1){
        for(int i=0; i<=(strlen(name[0])<strlen(name[1]))?strlen(name[0]):strlen(name[1]);i++){
            if(name[0][i] >name[1][i]){
                printf("%s\n",name[1]);
                printf("%s",name[0]);
                goto breaka;
            } else if(name[0][i] < name[1][i]) {
                printf("%s\n", name[0]);
                printf("%s", name[1]);
                goto breaka;
            }
        }
    }
    breaka:
    printf("\n");
}
