//
// Created by LeonardoZhou on 2022/3/7.
//

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int temp[3] = {a,b,c};
    qsort(temp,3,sizeof(temp[0]),cmp);
    printf("%d\n",temp[2]);
}

int cmp ( const void *a , const void *b)
{
    return *(int *)a - *(int *)b;
}