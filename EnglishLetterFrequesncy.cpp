/**
 * @file EnglishLetterFrequesncy.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief English letter frequency histogram printing
 * @version 0.1
 * @date 2022-12-06
 * @since MonDay; 11:11 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string line {};
    // line = "yousuf";
    cout<<"Enter a line here: ";
    getline(cin, line);
    for(size_t i {0}; i < line.length(); i++){
        if(isupper(line.at(i))){
            line.at(i) = tolower(line.at(i));
        }
    }
    cout<<"The line: "<<line<<endl;
    const short int alphabetNumber = 26;
    size_t count[alphabetNumber] {0};/*size_t == unsigned long long int*/

    for(size_t i {0}; i < line.length(); i++){
        count[line.at(i) - 'a']++;
    }
    char letter {'A'};
    for(unsigned short int i {0}; i < alphabetNumber; i++){
        size_t frequncy {*(count+i)};
        cout<<letter++<<"|";
        for(size_t j{1}; j <= frequncy; j++){
            cout<<"*";
        }
        if(frequncy != 0){
            cout<<"("<<frequncy<<")"<<endl;
        }else{
            cout<<endl;
        }   
    }

    return 0;
}
