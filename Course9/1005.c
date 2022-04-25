//
// Created by LeonardoZhou on 2022/4/18.
//

/*从键盘输入三个整数x,y和z，按从大到小的顺序输出它们的值。

输入要求
输入三个整数x,y和z。

输出要求
按从大到小的顺序输出它们的值。

输入样例
20 16 18

输出样例
20 18 16


提示
输出形如printf("%d %d %d\n",a,b,c);*/

#include <stdio.h>


int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int temp[3] = {a,b,c};
    for(int i=0;i <2;i++){
        for(int j=i+1;j<3;j++){
            if(temp[i]>temp[j]){
                int tmp = temp[j];
                temp[j] = temp[i];
                temp[i] = tmp;
            }

        }
    }
    printf("%d %d %d\n",temp[2],temp[1],temp[0]);
}