#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int start = (n/5)-4;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",start +2*i);
    }
    
    return 0;
}