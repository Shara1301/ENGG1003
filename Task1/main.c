#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");

    //Single line- it is a way of documenting our procedure
    //Second line- very useful in our assignments

    /*Multi line - give it on important line when the logic is harder to understand.
    ....
    as long as you like and
    the comments will end when u star and slash the line
    */

    int k;
    printf("Enter an Interger: ");
    scanf("%d",&k);
    k = 2 * k;
    printf("The doubled value is :  %d \n",k);

    /*Code 1
    float x, y;
    scanf("%f", &x);
    y = x*9.0/5.0 + 32.0;
    printf("%f\n", y);

    //code 2 - INTRINSIC DOCUMENATION
    float tempFahrenhiet, tempCelcius;
    scanf("%f", &tempCelcius);
    tempFahrenhiet = tempCelcius*9.0/5.0 + 32.0;
    printf("%f\n", tempFahrenhiet);

    camelCase - valueOfStock, heightOfBuilding
    PascalCase - ValueOfStock, HeightOfBuilding, TempCelcius
    snake_Case - (all lowercase, use underscore) temp_celcius, value_of_stock, height_of_building*/

    return 0;
}
