#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int digit_1 = n%10;
    int n1 = n/10;
    int digit_2 = n1%10;
    int n2 = n1/10;
    int digit_3 = n2%10;
    int n3 = n2/10;
    int digit_4 = n3%10;

    printf("%d%d%d%d",digit_1,digit_2,digit_3,digit_4); 
    return 0;
}