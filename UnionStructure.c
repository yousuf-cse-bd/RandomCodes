#include <stdio.h>
#include <string.h>
struct MyStructure
{
    /* data */
    int integer;
    float decimal;
    char name[20];
};

union MyUnion
{
    /* data */
    int integer;
    float decimal;
    char name[20];
};

int main(int argc, char const *argv[])
{
    /* code */
    struct MyStructure myStructure = {5, 15, "Yousuf"};
    printf("Data of Structure: \n Integer: %d\n Decimal: %0.2f\n Name:%s\n", myStructure.integer, myStructure.decimal, myStructure.name);

    union MyUnion myUnion;
    myUnion.integer = 5;
    myUnion.decimal = 15;
    strcpy(myStructure.name, "Yousuf");
    
    printf("Data of Union: \n Integer: %d\n Decimal: %0.2f\n Name:%s\n", myUnion.integer, myUnion.decimal, myUnion.name);

    return 0;
}
