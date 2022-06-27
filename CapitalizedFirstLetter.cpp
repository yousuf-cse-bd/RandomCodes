/**
 * @file CapitalizedFirstLetter.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Capitalized first letter each  words of string 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
string capitalizedFirstLetter(string text){
    for(unsigned int i = 0; i<text.length(); i++){
        if(i == 0){
            text[i] = toupper(text[i]);
        }
        else if(text[i] == ' '){
            text[i+1] = toupper(text[i+1]);
            // text[i] = '*';
        }
    }
    return text;
}
int main(int argc, char const *argv[])
{
    system("cls");
    cout<<capitalizedFirstLetter("amar sonar bangla")<<endl;
    cout<<capitalizedFirstLetter("ami tomay valobashi");
    return 0;
}
