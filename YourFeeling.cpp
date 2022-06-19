/**
 * @file YourFeeling.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */

    string buffer;
    const string key = "love";
    do{   
        cout<<"What is your feeling for me?: ";
        cin>>buffer;
        if(key == buffer){
            cout<<"I love you too."<<endl;
            // cout<<"Just for Fun!"<<endl;
            break;
        }
        else{
            continue;
        }
    } while (true);

    return 0;
}
