#include<stdio.h>

// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

int main(void)
{
    // 방법 1
    int dan;
    scanf("%d",&dan);
    for(int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n",dan,i,dan*i);
    }

    // 방법 2
    int i = 1;
    while (i <=9)
    {
        printf("%d * %d = %d\n",dan,i,dan*i);
        i++;
    }
    
    return 0;
}