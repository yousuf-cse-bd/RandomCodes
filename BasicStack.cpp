#include <iostream>
using namespace std;
int const MaxValue = 5;
int myStack[MaxValue];
int top = -1, newItem;

void pushValue()
{
    
    if(top < MaxValue)
    {
        cout<<"Enter a item: ";
        cin>>newItem;
        myStack[++top] = newItem;
    }
    if(top == MaxValue)
    cout<<"Stack overflow."<<endl;
}
void popValue()
{
    --top;
    if(top < -1)
    cout<<"Delete not possible...!"<<endl;
    else
    {
        myStack[--top];
        cout<<"Delete a value from the stack...!"<<endl;
    }
}
void statusStack()
{
    if(top == -1)
    {
        cout<<"Empty the statck...!"<<endl;
        return;
    }
    for(int i = top; i>=0; i--)
    {
        cout<<myStack[i]<<endl;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int option;
    do
    {
        cout<<"\t\t1 for push operation."<<endl;
        cout<<"\t\t2 for pop operation."<<endl;
        cout<<"\t\t3 for status check."<<endl;
        cout<<"\t\t0 for EXIT...!"<<endl;
        cout<<"Choose your option here: ";
        cin>>option;
        switch (option)
        {
        case 1:
            pushValue();
            break;
        case 2:
            popValue();
            break;
        case 3:
            statusStack();
            break; 
        case 0:
            cout<<"\tExit..."<<endl;
            break;
        default:
        cout<<"\tEnter your existing option."<<endl;
            break;
        }
    } while (option != 0);
    
    return 0;
}
