#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    long long salary = (long long)x * 365;
    printf("%lld\n",salary);
    return 0;
}