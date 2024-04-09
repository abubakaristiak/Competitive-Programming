#include<stdio.h>
int main()
{
    int d;
    scanf("%d", &d);
    int d_age = d / 5;
    int f_age = d_age*4;
    printf("%d %d", f_age, d_age);
    return 0;
}