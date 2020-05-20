#include <stdio.h>

int func(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int a;
    int sum = 0;
    scanf("%d", &a);
    sum = func(a);
    printf("%d", sum);
    return 0;
}

