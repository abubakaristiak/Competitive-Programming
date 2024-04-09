/*
This program to calcute when input even print sum of even series.
but input odd print sum of odd series
*/


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int start = (n/4)-2;
//     for (int i=0; i<4; i++){
//         printf("%d ", start + 2*i );
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int start = (n/4)-3;
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",start +2*i);
    }
    
    return 0;
}