#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>0){
        for(int i=1; i<=n; i++){
            printf("%d. I Want More Assignments\n",i);
        }
    }
    return 0;
}