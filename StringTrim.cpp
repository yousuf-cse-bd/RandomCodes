/**
 * @file StringTrim.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Trim: User implementation all type of string trimmer functions
 * @version 0.1
 * @date 2022-08-23
 * @since TuesDay; 10:59 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Reduce padding class-structure*/
#pragma pack(1)
class StringTrim{
private:
    string line;
public:
    StringTrim(string line){
        this->line = line;
    }
    /*Method 1: Writing own trim function*/
    string leftTrim(){
        unsigned int atStart;
        /*Space at start*/
        for(unsigned int i = 0; i<line.size(); i++){
            /*If the char not white spaces*/
            if(!(isblank(line[i]))){
                atStart = i;
                break;
            }
        }

        string leftTrimedString;
        for(unsigned int i = atStart; i<line.size(); i++){
            leftTrimedString += line[i];
        }
        return leftTrimedString;
    }
    /*Method 1: Writing own trim function*/
    string rightTrim(){
        unsigned int atEnd;
        /*Space from end*/
        for(int i = line.size() - 1; i>=0; --i){
            /*If the char not white spaces*/
            if(!(isblank(line[i]))){
                atEnd = i;
                break;
            }
        }
        string rightTrimedString;
        for(unsigned int i = 0; i<=atEnd; i++){
            rightTrimedString += line[i];
        }
        return rightTrimedString;
    }
    /*Method 2: C++ Standard Library*/
    string bothSideTrim(){
        const char * allTypeOfWhiteSpaces = " \t\n\r\f\v";
        /*First left-side-trim*/
        line.erase(0, line.find_first_not_of(allTypeOfWhiteSpaces));
        /*Now right-side-trim*/
        line.erase(line.find_last_not_of(allTypeOfWhiteSpaces)+1);
        return line;
    }
    ~StringTrim(){
        cout<<"Finished..."<<endl;
    }
};



int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Create an object with argumnetal constructor*/
    StringTrim myTrimer = StringTrim("   Yousuf Muhammad   ");
    cout<<"Left Trimed String: "<<myTrimer.leftTrim()<<"Ali"<<endl;
    cout<<"Right Trimed String: "<<myTrimer.rightTrim()<<"Ali"<<endl;
    cout<<"Both Side Trimed: "<<myTrimer.bothSideTrim()<<endl;

    return 0;
}
