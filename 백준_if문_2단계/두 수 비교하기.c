#include<stdio.h>

// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

int main(void)
{
    // 방법 1
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        printf(">");
    }
    else if(a < b)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }

    // 방법 2
    (a > b) ? printf(">") : (a < b) ? printf("<") : printf("==");
    return 0;
}