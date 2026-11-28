
#include <stdio.h>

int power(int n, int m)
{
    if(m == 0)
        return 1;

    int recAns = n * power(n, m - 1);

    return recAns;
}

int main()
{
    int n, m;

    printf("Enter Base: ");
    scanf("%d", &n);

    printf("Enter Power: ");
    scanf("%d", &m);

    int p = power(n, m);

    printf("Answer = %d", p);

    return 0;
}
