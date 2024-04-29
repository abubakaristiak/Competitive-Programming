#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=0;
    while(n<1000 || n>9999){
        scanf("%d", &n);
    }

    int ar[4];
    int temp = n;
    for(int i=3; i>=0; i--){
        ar[i] = temp%10;
        temp /=10;
    }
    for(int i=0; i<3; i++){
        for(int j=i+1; j<4; j++){
            if(ar[i] == ar[j]){
                flag++;
            }
        }
    }

     
    if(flag>0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}