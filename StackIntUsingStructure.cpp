/**
 * @file StackIntUsingStructure.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple integer data's stack DS
 * @version 0.1
 * @date 2023-01-09
 * @since MonDay; 10:15 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
#define size 5
struct StackInt{
    int data [size];
    size_t top;
}stack;

void push(StackInt *s, int item){
    if(s->top < size){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }else{
        cout<<"\tStack is full..!"<<endl;
    }
}
int pop(StackInt *s){
    int item {0};
    if(s->top == 0){
        cout<<"\tStack is empty...!"<<endl;
        return -1;
    }else{
        s->top = s->top - 1;
        item = s->data[s->top];
        return item;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    stack.top = 0;
    int item;

    int option;
    do{
        for(unsigned int i = 0; i<50; i++){
            cout<<"=";
        }
        cout<<"\n\t1 for push an item into the stack."<<endl;
        cout<<"\t2 for pop an item from the stack."<<endl;
        cout<<"\t0 for exit this program...!"<<endl;
        for(unsigned int i = 0; i<50; i++){
            cout<<"=";
        }
        cout<<"\nEnter your option here: ";
        cin>>option;
        switch (option){
        case 0:
            cout<<"Exit..!"<<endl;
            break;
        case 1:
            cout<<"Enter an item here: ";
            cin>>item;
            push(&stack, item);
            break;
        case 2:
           item =  pop(&stack);
           if(item > 0){
                cout<<"This "<<item<<" from the stack."<<endl;
            }
            break;
        default:
            cout<<"Choose your correct option."<<endl;
            break;
        }
    }while(option != 0);
    return 0;
}
