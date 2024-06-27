// CPP program to find sum of given series
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            sum += j;
        }
    }
    printf("the sum is %d",sum);
    return 0;
}
