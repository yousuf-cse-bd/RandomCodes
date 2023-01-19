/**
 * @file MenuFunction1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Console menu is created with recursion method
 * @version 0.1
 * @date 2023-01-19
 * @since ThursDay; 11:09 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

inline char menuFunction(void){
    char option {'\0'}; /*Null character ASCII value = 0*/
    cout<<"\n---------------------MENU---------------------"<<endl;
    cout<<"Press A for add()"<<endl;
    cout<<"Press S for sub()"<<endl;
    cout<<"Press M for mult()"<<endl;
    cout<<"Press D for div()"<<endl;
    cout<<"Press Q for quit()"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Enter your option here: ";
    cin>>option;
    return option;
    menuFunction();
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char option {'\0'}; /*Null character ASCII value = 0*/
    do{
        option = menuFunction();
        if(option == 'q' ||  option == 'Q'){
            cout<<setw(25)<<"EXIT...!"<<endl;
        }
        else if(option == 'a' || option == 'A'){
            cout<<setw(25)<<"ADD...!"<<endl; 
        }
        else if(option == 's' || option == 'S'){
            cout<<setw(25)<<"SUB...!"<<endl;
        }
        else if(option == 'm' || option == 'M'){
            cout<<setw(25)<<"MULT...!"<<endl;
        }
        else if (option == 'd' || option == 'D'){
            cout<<setw(25)<<"DIV...!"<<endl;
        }else{
            cout<<"Your selected option is invalid..!"<<endl;
        }
    }while(option != 'q' && option != 'Q');
    
    return 0;
}
