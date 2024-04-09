#include<stdio.h>
int main()
{
    long long sum = 0;
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        sum = sum +i;
    }
    printf("%lld",sum);
    return 0;
}