/**
 * @file SimpleConsoleMenu.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple console menu example
 * @version 0.1
 * @date 2022-12-01
 * @since ThursDay; 12:24 PM 
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char option {};
    do{
        cout<<"\n----------------------------------"<<endl;
        cout<<"\t1. Do this"<<endl;
        cout<<"\t2. Do that"<<endl;
        cout<<"\t3. Do something"<<endl;
        cout<<"\tQ: Quit"<<endl;
        cout<<"Enter your option: ";
        cin>>option;
        switch (option){
        case '1':
            cout<<"You selected: "<<option<<" and doing this."<<endl;
            break;
        case '2': 
            cout<<"You selected: "<<option<<" and doing that."<<endl;
            break;
        case '3': 
            cout<<"You selected: "<<option<<" and doing something."<<endl;
            break;
        case 'q':
        case 'Q': break;
        default:
            cout<<"Unkown option - try again..."<<endl;
            break;
        }

    } while (option != 'q' && option != 'Q');
    cout<<"\t\tQuit; Thanks...!"<<endl;
    
    return 0;
}
