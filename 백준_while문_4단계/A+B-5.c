#include<stdio.h>

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main(void)
{
    // 방법 1
    int a, b;
    while (1)
    {
        scanf("%d %d", &a, &b);        
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", a + b);
    }
    // 방법 2
    for(int i = 0;; i++)
    {
        scanf("%d %d", &a, &b);        
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", a + b);
    }

    return 0;
}