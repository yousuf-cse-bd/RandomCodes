/**
 * @file VectorBasic.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Basic vector from standard template library
 * @version 0.1
 * @date 2022-11-26
 * @since SaturDay; 10:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    /*Showing all elements using for-each loop*/
    for(auto x : vowels){
        cout<<x<<" ";
    }
    cout<<endl;
    /*Showing all elements using for loop with array syntax*/
    for(unsigned short int i = 0; i < vowels.size(); i++){
        cout<<vowels[i]<<" ";
    }
    cout<<endl;
    /*Show all elements using for loop with itself function*/
    for(unsigned short int i = 0; i != vowels.size(); i++){
        cout<<vowels.at(i)<<" ";
    }
    cout<<endl;

    vector <int> numbers {10, 20, 30};
    for(int x: numbers){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Now update the number's vector:";
    for(unsigned short int i = 0; i < numbers.size(); i++){
        cin>>numbers.at(i);
    }
    cout<<"Updated values: ";
    for(int x: numbers){
        cout<<x<<" ";
    }
    cout<<endl;

    numbers.push_back(100); /*Add an element of run time index*/
    numbers.push_back(101); /*Add an element of run time index*/
    cout<<"Finally Updated values: ";
    for(int x: numbers){ /*Finally there 5 elements*/
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
