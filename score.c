#include<stdio.h>

int main(void){
    int score;
    printf("input your score: ");
    scanf("%d", &score);

    if (90 < score && 100 >= score) printf("A\n");
    if (80 < score && score <= 90) printf("B\n");
    if (70 < score && score <= 80) printf("C\n");
    if (60 < score && score <= 70) printf("D\n");
    if (score <= 60) printf("F\n");

    return 0;
}