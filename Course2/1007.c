//
// Created by LeonardoZhou on 2022/2/28.
//

#include <stdio.h>

int main(){
    float usual_grades,experimental_results,written_test_results;
    scanf("%f%f",&usual_grades,&experimental_results);
    written_test_results = (90.0-0.1*usual_grades-0.3*experimental_results)/0.6;
    printf("%.1f\n",written_test_results);
    return 0;
}