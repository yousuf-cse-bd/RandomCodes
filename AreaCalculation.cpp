/**
 * @file AreaCalculation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculation of area of triangle using do-while loop with precision value
 * @version 0.1
 * @date 2022-12-01
 * @since ThursDay; 11:48 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char option{};
    do{
        double lenght{}, width{};
        cout<<"Enter lenght for the rectangle here: ";
        cin>>lenght;
        cout<<"Enter width for the rectangle here: ";
        cin>>width;

        long double area {lenght * width};
        cout<<fixed<<setprecision(2);
        cout<<"\tThe area of triangle: "<<area<<" square unit"<<endl;
        cout<<"Do you want to calculate again[Y/n]?: ";
        cin>>option;
    } while (option == 'y' || option == 'Y');
    cout<<"\t\t\tThanks!"<<endl;
    
    return 0;
}
