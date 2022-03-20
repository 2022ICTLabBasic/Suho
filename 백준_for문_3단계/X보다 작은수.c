#include<stdio.h>

// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

int main(void)
{
    // 방법 1
    int x, n, A[10000] = { 0, };
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (x > A[i])
        {
            printf("%d ", A[i]);
        }
    }
    // 방법 2
    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (x > a)
        {
            printf("%d ", a);
        }
    }
    
    return 0;
}