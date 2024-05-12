//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include<stdio.h>
int main()
{
    int num; 
    scanf("%d", &num);
    int year=num/365;
    int months = ((num%365)/30);
    int days = (num%365)-months*30;
    printf("%d years\n", year);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}