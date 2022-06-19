/**
 * @file SwitchAsMenu.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int option;
    // do
    // {
    //     for(unsigned i = 0; i<10; i++)
    //     {
    //         cout<<"=====";
    //     }
    //     cout<<"\n0 for EXIT...!"<<endl;
    //     cout<<"1 for Task1?"<<endl;
    //     cout<<"2 for Task2?"<<endl;
    //     cout<<"3 for Task3?"<<endl;
    //     cout<<"4 for Task4?"<<endl;
    //     cout<<"0 for EXIT!"<<endl;
    //     for(unsigned i = 0; i<10; i++)
    //     {
    //         cout<<"=====";
    //     }
    //     cout<<"\nEnter your option here: ";
    //     cin>>option;
    //     switch (option)
    //     {
    //     case 0:
    //         cout<<"EXIT..!"<<endl;
    //         break;
    //     case 1:
    //         cout<<"1 Pressed"<<endl;
    //         break;
    //     case 2:
    //         cout<<"2 Pressed"<<endl;
    //         break;
    //     case 3:
    //         cout<<"3 Pressed"<<endl;
    //         break;
    //     case 4:
    //         cout<<"4 Pressed"<<endl;
    //         break;
    //     default:
    //         cout<<"Muhammad Yousuf Ali"<<endl;
    //         break;
    //     }
    // }while(option != 0);

    while (true)
    {
        for(unsigned i = 0; i<10; i++)
        {
            cout<<"=====";
        }
        cout<<"\n0 for EXIT...!"<<endl;
        cout<<"1 for Task1?"<<endl;
        cout<<"2 for Task2?"<<endl;
        cout<<"3 for Task3?"<<endl;
        cout<<"4 for Task4?"<<endl;
        cout<<"0 for EXIT!"<<endl;
        for(unsigned i = 0; i<10; i++)
        {
            cout<<"=====";
        }
        cout<<"\nEnter your option here: ";
        cin>>option;
        switch (option)
        {
        case 0:
            if(cout<<"EXIT..!"<<endl)
            {
                exit(0);
                // here retun 0 supported
            }
            break;
        case 1:
            cout<<"1 Pressed"<<endl;
            break;
        case 2:
            cout<<"2 Pressed"<<endl;
            break;
        case 3:
            cout<<"3 Pressed"<<endl;
            break;
        case 4:
            cout<<"4 Pressed"<<endl;
            break;
        default:
            cout<<"Muhammad Yousuf Ali"<<endl;
            break;
        }
    }
    
    return 0;
}
