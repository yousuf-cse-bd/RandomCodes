/**
 * @file StringToNumbers.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Converting string to number typed of values
 * @version 0.1
 * @date 2023-01-30
 * @since MonDay; 07:00 PM
 * @copyright Copyright (c) 2023
 * @institute Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string idString {"171311101"};
    size_t idInt {stoull(idString)};
    cout<<"The ID: "<<idInt<<endl;

    string piValueString {"3.14159"};
    double piValueDouble {stod(piValueString)};
    cout<<"Pie Value: "<<piValueDouble<<endl;
    
    return 0;
}
