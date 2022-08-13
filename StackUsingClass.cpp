/**
 * @file StackUsingClass.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation of stack using class-object
 * @version 0.1
 * @date 2022-08-13
 * @since SaturDay; 9:19 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

class Stack{
    private:
    unsigned int top;
    int stack[10];

    public:
    Stack(){
        top = 0;
    }
    /*This method will be insert an element each called*/
    void push(int element){
        if(top < 10){
            stack[top] = element;
            ++top;
        }else{
            cout<<"Stack overflow..!"<<endl;
        }
        
    }

    /*Delete an element for each call*/
    void pop(){
        if(top == 0){  
            cout<<"Your stack is empty..."<<endl;
        }else{
            cout<<"Poped: "<<stack[--top]<<endl;
        }
    }

    /*Show all elements at a time*/
    void showAllElements(){
        if(top == 0){  
            cout<<"Your stack is empty..."<<endl;
        }else{
            cout<<"All Elements below:\n";
            for(unsigned int i = 0; i<top;i++){
                cout<<"Index["<<i<<"] = "<<stack[i]<<endl;
            }
        }
    }

};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Stack myStack;
    int option, element;
    do{
        cout<<"\t1 for Push call:"<<endl;
        cout<<"\t2 for Pop call:"<<endl;
        cout<<"\t3 for Display call:"<<endl;
        cout<<"\t0 for EXIT"<<endl;
        cout<<"\tEnter your choise here: ";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"\tEnter a new element here: ";
            cin>>element;
            myStack.push(element);
            break;
        case 2: 
            myStack.pop();
            break;
        case 3:
            myStack.showAllElements();
            break;
        case 0:
            cout<<"Your program is terminated."<<endl;
            break;
        default:
            cout<<"Enter your right choise..."<<endl;
            break;
        }

    } while (option != 0);
    
    return 0;
}
