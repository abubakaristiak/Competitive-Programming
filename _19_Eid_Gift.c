#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int child_gift= n/m;
    int remaining_gift = n%m;
    printf("%d %d",child_gift,remaining_gift);
    return 0;
}