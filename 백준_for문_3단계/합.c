#include<stdio.h>

// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main(void)
{
    // 방법 1
    int n,sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d",sum);

    // 방법 2
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d",sum);

    return 0;
}