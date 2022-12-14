/**
 * @file FunctionOverloadingWithVector.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function overloading with vector parameter 
 * @version 0.1
 * @date 2022-12-14
 * @since WednesDay; 03:56 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;
void showData(const vector <int> naturalNumbers); /*Function protoype*/
void showData(const vector <double> realNumber); /*Function protoype*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> naturalNumbers {1, 2, 3, 4, 5};
    vector <double> realNumber {3.14159, 2.291, 3.35, 4.20};
    showData(naturalNumbers);
    showData(realNumber);
    return 0;
}
void showData(const vector <int> naturalNumbers){ /*Function definition*/
    cout<<"Natural number elements: ";
    for(auto x: naturalNumbers){
        cout<<x<<" ";
    }
    cout<<endl;
}
void showData(const vector <double> realNumber){ /*Function definition*/
    cout<<"Real number elements: ";
    for(auto x: realNumber){
        cout<<x<<" ";
    }
    cout<<endl;
}
