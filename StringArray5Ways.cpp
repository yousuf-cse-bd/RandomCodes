/**
 * @file StringArray5Ways.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief Array of String in C++ -- 5 Different Ways tro create
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
///1
// This method demostrate array of strings using pointer character array
// This method only read mood available
void stringArrayUnsigPointer()
{
    cout<<"Call first function: stringArrayUnsigPointer()"<<endl;
    for(unsigned int i = 0; i<50; i++)
    {
        cout<<'=';
    }
    cout<<endl;
    // Initialize array of pointer
    const char * colors[] = {"Blue", "Red", "Orange", "Yellow"};
    //printing string stored in 2D array
    for(auto color : colors)
    { // auto || string same performe no error
        cout<<color<<" ";
    }
    cout<<endl;
    for(unsigned int i = 0; i< sizeof(colors) / sizeof(colors[0]); i++)
    {
        cout<<colors[i]<<" ";
    }
    cout<<"\n"<<endl;
}
///2
/*This method demostrate array of strings using 2D character array*/
void stringArrayUnsig2DCharArray()
{
    cout<<"Call second fucntion: stringArrayUnsig2DCharArray()"<<endl;
    for(unsigned int i = 0; i<50; i++)
    {
        cout<<'=';
    }
    cout<<endl;
    // Initialize 2D array
    char colors[4][10] =  {"Blue", "Red", "Orange", "Yellow"};
    // for(int i = 0; i<4; i++)
    // {
    //     // Read || Write -> supported this method
    //     cin>>colors[i];
    // }
    // printing strings stored 2D array
    for(auto color : colors)
    {
        // char *|| string || auto -> supported
        cout<<color<<" ";
    }
    cout<<"\n"<<endl;
    // Simple for loop
    for(unsigned int i = 0; i< sizeof(colors) / sizeof(colors[0]); i++)
    {
        cout<<colors[i]<<" ";
    }
    cout<<endl;
}
///3
/*This method to demostrate array of string using array of strings*/
void stringArray()
{
    cout<<"Call third fucntion: stringArray()"<<endl;
    for(unsigned int i = 0; i<50; i++)
    {
        cout<<'=';
    }
    cout<<endl;
    // Initialize String Array
    string colors[4] = {"Blue", "Red", "Orange", "Yellow"};
    // for(int i = 0; i<4; i++)
    // {
    //     // Read || Write -> supported this method
    //     cin>>colors[i];
    // }
    // Printing string
    for(auto color : colors)
    {
        // string || auto -> supported
        cout<<color<<" ";
    }
    cout<<endl;
    // Simple for loop
    for(unsigned int i = 0; i< sizeof(colors) / sizeof(colors[0]); i++)
    {
        cout<<colors[i]<<" ";
    }
    cout<<"\n"<<endl;
}
///4
/*This method to demostrate array of stings using vector*/
#include <vector>
void stringArrayUsingVector()
{
    cout<<"Call fourth function: stringArrayUsingVector()"<<endl;
    for(unsigned int i = 0; i<50; i++)
    {
        cout<<'=';
    }
    cout<<endl;
    // Declaring vector of string type
    // Value can be added here using initializer-list
    // synatx
    vector <string> colors {"Blue", "Red", "Orange", "Yellow"};
    // String can be added at any time with push_back(" ") functiom
    colors.push_back("White");
    // Printing string using forEachLoop
    for(auto color : colors)
    {
        // auto || string -> supported
        cout<<color<<" ";
    }
    cout<<endl;
    // printig element using normal loop
    for(int i = 0; i<colors.size(); i++)
    {
        cout<<colors[i]<<" ";
    }
    cout<<"\n"<<endl;
}
///5
/*This method to demostrate array of string using STL array*/
#include <array>
void stringArrayUsingSTL_Array()
{
    cout<<"Call fifth function: stringArrayUsingSTL_Array()"<<endl;
    for(unsigned int i = 0; i<50; i++)
    {
        cout<<'=';
    }
    cout<<endl;
    // Initialize array
    array <string, 4> colors {"Blue", "Red", "Orange", "Yello"} ;
    // printing the arrya output
    // for(int i = 0; i<4; i++)
    // {
        // Read || Write -> supported this method
    //     cin>>colors[i];
    // }
    for(auto color : colors)
    {
        // auto || string -> supported
        cout<<color<<" ";
    }
    cout<<endl;
    // simple for loop
    for(unsigned int i = 0; i<colors.size(); i++)
    {
        cout<<colors[i]<<" ";
    }
    cout<<"\n"<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    // 1
    stringArrayUnsigPointer();
    // 2
    stringArrayUnsig2DCharArray();
    // 3
    stringArray();
    // 4
    stringArrayUsingVector();
    // 5
    stringArrayUsingSTL_Array();
    return 0;
}
