//
// Created by LeonardoZhou on 2022/4/18.
//

/*题目描述
已知有10个同学的成绩，求最高分和最低分以及相应分数所在的位置。从键盘输入10个整数存放在数组中，假设这10个数互不相同，且无序排列。请找出其中最大数及它在数组中的下标，以及最小数和下标。

输入要求
从键盘输入10个整数。

输出要求
找出其中最大数及它在数组中的下标，以及最小数和下标。各占一行。

输入样例
60 70 90 50 65 76 88 95 91 80

输出样例
95 7
50 3*/

#include <stdio.h>

int main(){
    int grade[10];
    int max_pos=0,max = 0,min_pos = 0,min = 100;
    for(int i=0; i<10; i++){
        int a;
        scanf("%d",&a);
        grade[i] = a;
        if(max < a){
            max = a;
            max_pos = i;
        }else if(min> a){
            min = a;
            min_pos = i;
        }
    }
    printf("%d %d\n",max,max_pos);
    printf("%d %d\n",min,min_pos);
}