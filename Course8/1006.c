//
// Created by LeonardoZhou on 2022/4/11.
//

#include <stdio.h>
#include <string.h>


int main(){
    int m,n,temp = 0;
    scanf("%d%d",&m,&n);
    int string[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&string[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n; j++){
            printf("%d ",string[i][j]);
            if(j==n-1){
                printf("\n");
            }
        }
    }

}
