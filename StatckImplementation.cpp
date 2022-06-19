/**
 * @file StatckImplementation.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

#define ARRAY_SIZE 10
// This is a statck which is consist positive items
typedef  struct
{
    /* data */
    int top;
    int data[ARRAY_SIZE];
}Stack;

// Load an item into stack
void push(Stack *s, int item)
{
    if(s->top < ARRAY_SIZE)
    {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
    {
        cout<<"Stack is Full..!"<<endl;
        return;
    }
}
// delete an item from stack
int pop(Stack *s)
{
    int item;
    if(s->top == 0)
    {
        cout<<"The Stack is Empty...!"<<endl;
        return -1;
    }
    else
    {
        s->top = s->top - 1;
        s->data[s->top];
        item = s->data[s->top];
    }
    return item;
}
int main(int argc, char const *argv[])
{
    /* code */
    Stack myStack;
    myStack.top = 0;
    int item;

    int option;
   
    do
    {
        for(unsigned int i = 0; i<50; i++)
        {
            cout<<"=";
        }
        cout<<"\n\t1 for push an item into the stack."<<endl;
        cout<<"\t2 for pop an item from the stack."<<endl;
        cout<<"\t0 for exit this program...!"<<endl;
        for(unsigned int i = 0; i<50; i++)
        {
            cout<<"=";
        }
        cout<<"\nEnter your option here: ";
        cin>>option;
        switch (option)
        {
        case 0:
            cout<<"Exit..!"<<endl;
            break;
        case 1:
            cout<<"Enter an item here: ";
            cin>>item;
            push(&myStack, item);
            break;
        case 2:
           item =  pop(&myStack);
           if(item > 0)
           {
               cout<<"This "<<item<<" from the stack."<<endl;
           }
            break;
        default:
            cout<<"Choose your correct option."<<endl;
            break;
        }
    } while (option != 0);
    

    return 0;
}
