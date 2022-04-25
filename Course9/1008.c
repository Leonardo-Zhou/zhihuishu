//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
在宁大校园里，没有自行车，上课办事会很不方便。但实际上，并非去办任何事情都是骑车快，因为骑车总要找车、开锁、停车、锁车等，这要耽误一些时间。假设找到自行车，开锁并骑上自行车的时间为27秒；停车锁车的时间为23秒；步行每秒行走1.2米，骑车每秒行走3.0米。请判断走不同的距离去办事，是骑车快还是走路快。


输入要求
输入一行，包含一个整数，表示一次办事要行走的距离，单位为米。


输出要求
输出一行，如果骑车快，输出一行"Bike"；如果走路快，输出一行"Walk"；如果一样快，输出一行"All"。


输入样例
120

输出样例
Bike*/

#include <stdio.h>

int main(){
    int distance;
    scanf("%d",&distance);
    float time_walk = distance/1.2;
    float time_bike = distance/3.0 + 50;
    if(time_bike > time_walk){
        printf("Walk\n");
    }else if(time_bike<time_walk){
        printf("Bike\n");
    }else{
        printf("All\n");
    }
}