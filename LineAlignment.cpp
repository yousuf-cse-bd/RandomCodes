/**
 * @file LineAlignment.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Line centralize from multiple line
 * @version 0.1
 * @date 2022-09-05
 * @since MonDay; 09: 52 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

class LineAlignment{
private:
    string *names;
    unsigned int size;
public:
    LineAlignment(unsigned int size){
        this->size = size;
        names = new string[10];
        names[0] = "Muhammad Yousuf Ali";
        names[1] = "Yousuf";
        names[2] = "Imtiaz Ahmad Maruf";
        names[3] = "Mr. Maruf";
        names[4] = "Tofayel Ahmad Tamim";
        names[5] = "Tofayel Tamim";
        names[6] = "Istiak Muwaj";
        names[7] = "Istiak Ahmad";
        names[8] = "Ayesha Aktar Toma";
        names[9] = "Toma";
    }
    void findMaxLengthFromString(unsigned int *stringMaxLen){
   
        unsigned int len;
        for(unsigned int i = 0; i < 10; i++){
            len = names[i].length();
            *stringMaxLen = max (*stringMaxLen, len);
        }
    }
    void leftAlignment(){
        cout<<"\tLeft Alignment:"<<endl;
        cout<<"------------------------------------"<<endl;
        for(unsigned int index = 0; index <= size; index++){
            cout<<names[index]<<endl;
        }
    }
    void centerAlignment(){
        cout<<"\tCenterlize Alignment:"<<endl;
        cout<<"------------------------------------"<<endl;
        /*If maxLen = 0; as big problem result*/
        unsigned int stringMidMaxLen, stringMaxLen = 0;
        findMaxLengthFromString(&stringMaxLen);
        
        stringMidMaxLen = stringMaxLen / 2;
        unsigned int stringMidLen, leftSpaces;
        for(unsigned int index = 0; index < size; index++){
            stringMidLen = (names[index].length()) / 2;
            leftSpaces = stringMidMaxLen - stringMidLen;
            for(unsigned int space = 1; space <= leftSpaces; space++){
                cout<<' ';
            }
            cout<<names[index]<<endl;
        }
    }
    void rightAlignment(){
        cout<<"\tRight Alignment:"<<endl;
        cout<<"------------------------------------"<<endl;
        /*If maxLen = 0; as big problem result*/
        unsigned int  stringMaxLen = 0;
        findMaxLengthFromString(&stringMaxLen);
        
        unsigned int stringMidLen, leftSpaces;
        for(unsigned int index = 0; index < size; index++){
            stringMidLen = (names[index].length());
            leftSpaces = stringMaxLen - stringMidLen;
            for(unsigned int space = 1; space <= leftSpaces; space++){
                cout<<' ';
            }
            cout<<names[index]<<endl;
        }
    }
    ~LineAlignment(){
        cout<<"\t\tTHANKS...!"<<endl;
        delete names;
    }
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Create an object*/
    LineAlignment *alignment = new LineAlignment(10);
    /*When we call leftAlignmnet() function, this provides result perfectly but another function not calling*/
    // alignment->leftAlignment();
    alignment->centerAlignment();
    alignment->rightAlignment();
    delete alignment;
    
    return 0;
}
