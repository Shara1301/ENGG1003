#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    //y = 2x + 3 x 5
    y = (2 * x)+ (3 * 5);
    printf("y = %f \n",y);
    return 0;
}
