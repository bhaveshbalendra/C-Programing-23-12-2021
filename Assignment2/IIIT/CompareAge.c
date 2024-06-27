#include <stdio.h>
int main() {
    int user1,user2 ;  
    printf("Enter your age user1:");
    scanf("%d",&user1);
    printf("Enter your age user2:");
    scanf("%d",&user2);
    if (user1 > user2)
    {
        printf("user1 is older than user2");
    }
    else
    {
        printf("user2 is older than user1");
    }
    return 0;
}
