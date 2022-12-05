/**
 * @file String.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String in modern C++
 * @version 0.1
 * @date 2022-12-05
 * @since SunDay; 12:25 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string s1; /*Empty*/
    cout<<"s1 = "<<s1<<endl;
    string s2 {"Yousuf"}; /*Yousuf*/
    cout<<"s2 = "<<s2<<endl;
    string s3 {s2}; /*s3 = s2 or Yousuf*/
    cout<<"s3 = "<<s3<<endl;
    string s4 {"Yousuf", 3}; /*You*/
    cout<<"s4 = "<<s4<<endl;
    string s5 {s3, 0, 2}; /*Yo*/
    cout<<"s5 = "<<s5<<endl;
    string s6 {65, 'X'}; /*65 == A*/
    cout<<"s6 = "<<s6<<endl;
    string s7 (3, 'Y'); /*YYY*/
    cout<<"s7 = "<<s7<<endl;

    string firstName = "Md. Yousuf";
    string lastName ("Ali");
    string fullName {firstName + " " +lastName};  /*String concatenation*/
    cout<<"The full name: "<<fullName<<endl;

    string myName {"YOUSUF"};
    for(auto x: myName){ /*Here auto will be char*/
        cout<<x<<"\t";
    }
    cout<<endl;
    for(int x: myName){
        cout<<x<<"\t";
    }
    cout<<endl;

    /*substring - substr(startIndex, length)*/
    string str {"This is a test"}; 
    cout<<"Given line: "<<str<<endl; /*This is a test*/
    cout<<"First word: "<<str.substr(0, 4)<<endl; /*This*/
    cout<<"Second word: "<<str.substr(5,2)<<endl; /*is*/
    cout<<"Third word: "<<str.substr(8,1)<<endl; /*a*/
    cout<<"Fourth word: "<<str.substr(10, 4)<<endl; /*test*/

    /*find("subString")-> return the index*/
    cout<<"'This' exist at : "<<str.find("This")<<endl; /*0*/
    cout<<"'is' exist at : "<<str.find("is")<<endl; /*2, becuase 'is' is an string*/
    cout<<"'a' exist at: "<<str.find("a")<<endl; /*8*/
    cout<<"'test' exist at: "<<str.find("test")<<endl; /*10*/
    cout<<"'e' exist at: "<<str.find('e')<<endl; /*11*/
    cout<<str.find("is", 6)<<endl;
    /*Remove a substring of character from string, erase(startIndex, length)*/

    string line {"This is a test"};
    cout<<"A line: "<<line<<endl;
    cout<<"Remaining string: "<<line.erase(0, 5)<<endl; /*is a test*/ //erased = This
    cout<<"Remaining string: "<<line.erase(5, 4)<<endl; /*is a*/ //erased = test
    cout<<"Remaining string: "<<line.empty()<<endl; /*0*/ //erased = all;

    /*string input and getline() method*/
    string s{};
    // cout<<"Enter a line here: ";
    // getline(cin, s); /*Read enitie line until \n (new-line)*/
    // cout<<"Enterd the line: "<<s<<endl;

    cout<<"Enter multiple lines here: ";
    getline(cin, s, 'x'); /*Here read input character until press 'x'*/
    cout<<"Entered all the lines: "<<s<<endl;

    return 0;
}
