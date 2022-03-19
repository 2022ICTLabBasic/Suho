#include<stdio.h>

// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D,
// 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
int main(void)
{
    // 방법 1
    int num;
    scanf("%d",&num);
    if(num >= 90 && num <= 100)
    {
        printf("A");
    }
    else if(num >= 80)
    {
        printf("B");
    }
    else if(num >= 70)
    {
        printf("C");
    }
    else if(num >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    // 방법 2
    (num >= 90 && num <= 100) ?  printf("A") : (num >= 80) ? printf("B") : (num >= 70) ? printf("C") : (num >= 60) ? printf("D") : printf("F");
    return 0;
}