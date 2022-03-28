//
// Created by LeonardoZhou on 2022/2/21.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[20],b[20];
    scanf("%s%s",&a,&b);
    double i = atof(a),j = atof(b);
    printf("%.2f\n", i+j);
    return 0;
}