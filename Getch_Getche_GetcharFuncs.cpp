/**
 * @file Getch_Getche_GetcharFuncs.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char ch;
    printf("Enter a char here: ");
    // Taking a user input without printing the value
    ch = getch(); 
    printf("\nValue of ch is: %c\n", ch);

    cout<<"Enter a char here: ";
    ch = getche();
    cout<<"\nValue of ch is: "<<ch<<endl;
    cout<<"Now enter a char here: ";
    ch = getchar();
    cout<<"Value of ch is: "<<ch<<endl;
    return 0;
}
