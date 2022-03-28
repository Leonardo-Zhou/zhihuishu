//
// Created by LeonardoZhou on 2022/3/27.
//

//
// Created by LeonardoZhou on 2022/3/25.
//

# include <stdio.h>

int main(){
    int score,sum = 0;
    for(int i=0;i<4;i++){
        scanf("%d",&score);
        sum +=score;
    }
    printf("%.1lf\n",(double)sum/4.0);
}