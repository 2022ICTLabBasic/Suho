#include<stdio.h>

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main(void)
{
    // 방법 1
    int t = 0,a,b;
    scanf("%d",&t);
    for(int i = 1; i <= t; i ++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    // 방법 2
    int i = 1;
    while (i <= t)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        i++;
    }
    
    return 0;
}