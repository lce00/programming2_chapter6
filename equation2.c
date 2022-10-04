#include<stdio.h>
#include<math.h>

int main(void)
{
    double a, b, c, dis;

    printf("계수 a를 입력하세요: ");
    scanf("%lf", &a);

    printf("계수 b를 입력하세요: ");
    scanf("%lf", &b);

    printf("계수 c를 입력하세요: ");
    scanf("%lf", &c);

    if(a == 0) printf("방정식의 근은 %f입니다.", -c/b);

    if(b == 0) 
    {
        if ((-c/a) > 0) { printf("방정식의 근은 %f입니다.\n", sqrt((-c/a)));
        printf("방정식의 근은 %f입니다.\n", -sqrt((-c/a))); }
        if ((-c/a) < 0) { printf("실근이 존재하지 않습니다.\n"); }
        if ((-c/a) == 0) { printf("방정식의 근은 %f입니다.\n", sqrt((c/a))); }
    }

    else
    {
        dis = (b*b - 4.0*a*c);
        if(dis >= 0)
        {
            printf("방정식의 근은 %f입니다.\n", ((-b+sqrt(dis))/(2.0*a)));
            printf("방정식의 근은 %f입니다.\n", ((-b-sqrt(dis))/(2.0*a)));
        }
        else
            printf("실근이 존재하지 않습니다.\n");
    }

    return 0;
}