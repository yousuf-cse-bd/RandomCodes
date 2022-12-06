/**
 * @file DigitFrequncyHistogram.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Generated a histogram digits frequency from string number
 * @version 0.1
 * @date 2022-12-06
 * @since TuesDay; 11:15 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string number {};
    cout<<"Enter a big number here: ";
    getline(cin, number);
    cout<<"Your entered number: "<<number<<endl;
    const unsigned short int decimalBase {10}; /*In decimal max 10 types of digits*/
    size_t frequencyCounter[decimalBase] {0}; /*Must initialized by zero*/
    /*Length based for-each loop*/
    for(auto digit: number){
        if(isdigit(digit)){
            frequencyCounter[digit - '0']++; /*Counting frequencies*/
            /*NB: I coultd not use pointer notation here*/
        }
    }
    /*Displaying histogram*/
    char digit {'0'};
    for(unsigned short int i{0}; i < decimalBase; i++){
        cout<<digit++<<"|"; /*Left alignment printing each digit*/
        size_t counter {*(frequencyCounter + i)}; /*Pointer notation instead array notation*/
        unsigned int perFive {0};
        for(size_t j{1}; j <= counter; j++){
            /*All kind of histogram values*/
            if(j % 5 == 0){ 
                perFive++;
                cout<<(perFive * 5);
            }else{
                cout<<"*";
            }
        }
        if(counter != 0){
            cout<<" ("<<counter<<")"<<endl;
        }else{
            cout<<endl;
        }
    }
    system("pause>0");
    return 0;
}
