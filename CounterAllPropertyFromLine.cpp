/**
 * @file CounterAllPropertyFromLine.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Line: Vowels, Consonants, SpcecailChar, Words counter
 * @version 0.1
 * @date 2022-08-22
 * @since MonDay, 09:14 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <conio.h>
using namespace std;

/*User defined trimer function*/
string trimFunction(string line){
    /*Initialize considering NO triming requred.*/
    unsigned int atStart = 0, atEnd = 0;
    /*Left-Trim: Space at start*/
    for(unsigned int i = 0; i<line.size(); i++){
        /*If get a first alphanumeric character, then break*/
        if(line[i] != ' '){
            atStart = i;
            break;
        }
    }
    /*Right Trim: Space from end*/
    for(int i = line.size()- 1; i>=0; i--){
        /*If get a first alphanumeric character, then break*/
        if(line[i] != ' '){
            atEnd = i;
            break;
        }
    }

    string trimedSting = "";
    for(unsigned int i = atStart; i <= atEnd; i++){
        trimedSting += line[i];
    }
    return trimedSting;
}

string counterAllPropertyFromLine(string line){
   line = trimFunction(line);
    unsigned int vowels, consonants, words, digits, symbols;
    vowels = consonants = words = digits = symbols = 0;
    unsigned int space = 0;
    
    for(unsigned int i = 0; i != line.length(); i++){
        char ch = tolower(line[i]);
        if(ch == ' '){
            words ++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else if(ch == 'a' ||  ch == 'e' ||ch == 'i' || ch == 'o' || ch == 'u'){
            vowels++;
        }
        else if((ch > 'a' && ch < 'e') || (ch > 'e' && ch < 'i') || (ch > 'i' && ch < 'o') || (ch > 'o' && ch < 'u') || (ch > 'u')){
            consonants++;
        }else{
            symbols++;
        }

    }
    words++;
    cout<<"# Number of consonant\t: "<<consonants<<endl;
    cout<<"# Number of digits\t: "<<digits<<endl;
    cout<<"# Number of symbols\t: "<<symbols<<endl;
    cout<<"# Number of vowels\t: "<<vowels<<endl;
    cout<<"# Number of word\t: "<<words<<endl;
    return "";
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    cout<<"Enter a line here: ";
    string line;
    getline(cin, line);
    counterAllPropertyFromLine(line);
    cout<<"\nEnter any key..."<<endl;
    getchar();
    return 0;
}
