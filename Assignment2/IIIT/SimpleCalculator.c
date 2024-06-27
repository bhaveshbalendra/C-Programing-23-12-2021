#include<stdio.h>
int main() {
    char opt;
    float num1,num2;
    printf("Enter the Operators:");
    scanf("%c",&opt);
    printf("Enter the Num1 and Num2:");
    scanf("%f %f",&num1,&num2);
    
    if (opt=='+') {
        printf("%f and %f Addition is:%f",num1,num2,(num1+num2));  
    }
    
    else if (opt=='-') {
        printf("%f and %f Subtraction is:%f",num1,num2,(num1-num2));  
    }

    else if (opt=='*') {
        printf("%f and %f Multiplcation is:%f",num1,num2,(num1*num2)); 
    } 

    else if (opt=='/') {
        printf("%f and %f Division is:%f",num1,num2,(num1/num2)); 
    }
    
    return 0;

}