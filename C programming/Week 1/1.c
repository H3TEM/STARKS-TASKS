#include <stdio.h>
int main()
{
    int x;
    float y;
    char z;
    
     printf("Enter the character : ");
    scanf("%c",&z);
    
    printf("Enter the integer value : ");
    scanf("%d",&x);
    
    printf("Enter the float value : ");
    scanf("%f",&y);

    printf("The integer value is %d \n",x);
    printf("The float value is %0.2f \n",y);
    printf("The character is %c \n",z);
    return 0;
}