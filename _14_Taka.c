#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int Mina = (x+y)/2;
    int Rina = Mina - y;
    printf("%d %d", Mina, Rina);
    return 0;
}