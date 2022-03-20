#include<stdio.h>

// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

int main(void)
{
    // 방법 1
    int n;
    scanf("%d",&n);
    for(int i = n; i >= 1; i--)
    {
        printf("%d\n",i);
    }
    // 방법 2
    int i = n;
    while (i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}