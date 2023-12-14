#include <stdio.h>

int main() 
{
    float num1,num2,z;
 
    printf("Enter the first number: ");
    scanf("%f", &num1);
   
    printf("Enter the second number: ");
    scanf("%f", &num2);
  
    z= num1;
    num1 = num2;
    num2 = z;

    printf("First number: %0.2f\n", num1);
    printf("Second number: %0.2f\n", num2);

    return 0;
}
